#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MinNumber 1
#define MaxNumber 200
#define ArrayLength 50

void randomArray(int a[], int n, int s, int t) {
    int i;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % t + s;
    }
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int a[], int p, int r) {
    int i = p, j = r + 1;
    int x = a[p];
    while (1) {
        while (a[++i] < x && i < r);
        while (a[--j] > x);
        if (i >= j)break;
        Swap(&a[i], &a[j]);
    }
    a[p] = a[j];
    a[j] = x;
    return j;
}

void displayArray(char s[], int a[], int n) {
    puts(s);
    int i;
    for (i = 0; i < n - 1; i++) {
        printf("%d,", a[i]);
    }
    printf("%d\n", a[n - 1]);
}

void QuickSort(int a[], int p, int r) {
    if (p < r) {
        int q = Partition(a, p, r);
        QuickSort(a, p, q - 1);
        QuickSort(a, q + 1, r);
    }
}

int BinarySearch(const int b[], int search_key, int low, int high) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (search_key == b[mid])
        return mid;
    else if (search_key < b[mid])
        return BinarySearch(b, search_key, low, mid - 1);
    else
        return BinarySearch(b, search_key, mid + 1, high);
}


int main() {
    srand(time(0));
    int a[ArrayLength],x;
    randomArray(a, ArrayLength, MinNumber, MaxNumber);
    QuickSort(a, 0, ArrayLength);
    displayArray("", a, ArrayLength);
    scanf("%d",&x);
    printf("\n%d",BinarySearch(a,x,0,ArrayLength)) ;
    return 0;
}