//
// Created by lixia on 2019/9/12/005.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MinNumber 1
#define MaxNumber 200
#define ArrayLength 50
int b[ArrayLength];

void randomArray(int a[], int n, int s, int t) {
    int i;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % t + s;
    }
}

void displayArray(char s[], int a[], int n) {
    puts(s);
    int i;
    for (i = 0; i < n - 1; i++) {
        printf("%d,", a[i]);
    }
    printf("%d\n", a[n - 1]);
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//生成i到j的随机整数
int random(int i, int j) {
    return rand() % (j - i) + i;
}

int Partition(int a[], int p, int r) {
    int i = p, j = r + 1;
    int x = a[random(p, r)];
    //将所有比x大的数移动到x右边，将所有比x小的数移动到x左边
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


void QuickSort(int a[], int p, int r) {
    if (p < r) {
        int q = Partition(a, p, r);
        QuickSort(a, p, q - 1);
        QuickSort(a, q + 1, r);
    }
}


int main() {
    srand(time(0));
    int a[ArrayLength];
    randomArray(a, ArrayLength, MinNumber, MaxNumber);
    displayArray("原始数组:", a, ArrayLength);
    QuickSort(a, 0, ArrayLength);
    displayArray("排序后数组:", a, ArrayLength);
    return 0;
}