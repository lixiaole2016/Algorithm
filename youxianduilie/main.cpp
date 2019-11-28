#include <stdio.h>
#include <stdlib.h>

#define MAXTREEHIGHT 100


struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
};


struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode **array;
};

struct MinHeapNode *newNode(char data, unsigned freq) {
    struct MinHeapNode *temp = (struct MinHeapNode *) malloc(sizeof(struct MinHeapNode));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
};

struct MinHeap *newMinHeap(unsigned capacity) {
    struct MinHeap *minHeap = (struct MinHeap *) malloc(sizeof(struct MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    struct MinHeapNode **array = (struct MinHeapNode **) malloc(minHeap->capacity * sizeof(struct MinHeapNode *));
    minHeap->array = array;
    return minHeap;
};

void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b) {
    struct MinHeapNode *temp = *a;
    *a = *b;
    *b = temp;
}

int getLeftIndex(int index) {
    return ((index * 2) + 1);
}

int getRightIndex(int index) {
    return ((index * 2) + 2);
}

void adjustMinHeap(struct MinHeap *minHeap, int index) {
    int less = index;
    int left = getLeftIndex(index);
    int right = getRightIndex(index);
    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[less]->freq) {
        less = left;
    }
    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[less]->freq) {
        less = right;
    }
    if (less != index) {
        swapMinHeapNode(&minHeap->array[less], &minHeap->array[index]);
        adjustMinHeap(minHeap, less);
    }
}

int isSizeOne(struct MinHeap *minHeap) {
    return (minHeap->size == 1);
}

int isLeaf(struct MinHeapNode *node) {
    return !(node->left) && !(node->right);
}


void printArr(int arr[], int n) {
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf("\n");
}

struct MinHeapNode *extractMin(struct MinHeap *minHeap) {
    struct MinHeapNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    adjustMinHeap(minHeap, 0);
    return temp;
}

void insertMinHeap(struct MinHeap *minHeap, struct MinHeapNode *minHeapNode) {
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = minHeapNode;
}

void buildMinHeap(struct MinHeap *minHeap) {
    int index = minHeap->size - 1;
    int i;
    for (i = (index - 1) / 2; i >= 0; --i) {
        adjustMinHeap(minHeap, i);
    }
}

struct MinHeap *createAndBuildMinHeap(char data[], int freq[], int size) {
    struct MinHeap *minHeap = newMinHeap(size);
    for (int i = 0; i < size; i++) {
        minHeap->array[i] = newNode(data[i], freq[i]);
    }
    minHeap->size = size;
    buildMinHeap(minHeap);
    return minHeap;
}

struct MinHeapNode *buildHuffmanTree(char data[], int freq[], int size) {
    struct MinHeapNode *left, *right, *top;
    struct MinHeap *minHeap = createAndBuildMinHeap(data, freq, size);
    while (!isSizeOne(minHeap)) {
        left = extractMin(minHeap);
        right = extractMin(minHeap);
        top = newNode(' ', left->freq + right->freq);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}

void printCodes(struct MinHeapNode *root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (isLeaf(root)) {
        printf("%c:", root->data);
        printArr(arr, top);
    }
}


void HuffmanCodes(char data[], int freq[], int size) {
    struct MinHeapNode *root = buildHuffmanTree(data, freq, size);
    int arr[MAXTREEHIGHT], top = 0;
    printCodes(root, arr, top);
}


int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {45, 13, 12, 16, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    HuffmanCodes(arr, freq, size);
    return 0;
}