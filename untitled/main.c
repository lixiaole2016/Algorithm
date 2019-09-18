//
// Created by lixia on 2019/9/5/005.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MinNumber 1
#define MaxNumber 200
#define ArrayLength 50
int b[ArrayLength];

//����������a[]���s~t���������(����s��������t)
void randomArray(int a[], int n, int s, int t) {
    int i;
    for (int i = 0; i < n; i++) {
        a[i] = rand() % t + s;
    }
}

//��ӡ��ʾ��s[]����������a[]
void displayArray(char s[], int a[], int n) {
    puts(s);
    int i;
    for (i = 0; i < n - 1; i++) {
        printf("%d,", a[i]);
    }
    printf("%d\n", a[n - 1]);
}

void Merge(int c[], int d[], int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    while ((i <= m) && (j <= r)) {
        if (c[i] <= c[j]) {
            d[k++] = c[i++];
        } else {
            d[k++] = c[j++];
        }
    }
    if (i > m) {
        for (int q = j; q <= r; q++) {
            d[k++] = c[q];
        }
    } else {
        for (int q = i; q <= m; q++) {
            d[k++] = c[q];
        }
    }

}

void Copy(int a[], int c[], int s, int t) {
    int i;
    for (i = s; i <= t; i++) {
        a[i] = c[i];
    }
}

void MergeSort(int a[], int s, int t) {
    if (s < t) {
        int i = (s + t) / 2;
        MergeSort(a, s, i);
        MergeSort(a, i + 1, t);
        Merge(a, b, s, i, t);
        Copy(a, b, s, t);
    }
}


int main() {
    srand(time(0));
    int a[ArrayLength];
    randomArray(a, ArrayLength, MinNumber, MaxNumber);
    displayArray("ԭʼ����:", a, ArrayLength);
    MergeSort(a, 0, ArrayLength - 1);
    displayArray("���������:", a, ArrayLength);
    return 0;
}