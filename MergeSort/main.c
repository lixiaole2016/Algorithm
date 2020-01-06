#include<stdio.h>

#define Maxlength 10

// 打印结果
void Show(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void Merge(int array[], int left, int m, int right) {
    int aux[Maxlength] = {0};
    int i; //第一个数组索引
    int j; //第二个数组索引
    int k; //临时数组索引
    for (i = left, j = m + 1, k = 0; k <= right - left; k++) // 分别将 i, j, k 指向各自数组的首部。
    {
        if (i == m + 1) {
            aux[k] = array[j++];
            continue;
        }
        if (j == right + 1) {
            aux[k] = array[i++];
            continue;
        }
        if (array[i] < array[j])
            aux[k] = array[i++];
        else
            aux[k] = array[j++];
    }
    for (i = left, j = 0; i <= right; i++, j++) {
        array[i] = aux[j];
    }
}

void MergeSort(int array[], int start, int end) {
    if (start < end) {
        int i;
        i = (end + start) / 2;
        MergeSort(array, start, i);
        MergeSort(array, i + 1, end);
        Merge(array, start, i, end);
    }
}

int main() {   //测试数据
    int arr_test[Maxlength] = {8, 4, 2, 3, 5, 1, 6, 9, 0, 7};
    //排序前数组序列
    Show(arr_test, Maxlength);
    MergeSort(arr_test, 0, Maxlength - 1);
    //排序后数组序列
    Show(arr_test, Maxlength);
    return 0;
}