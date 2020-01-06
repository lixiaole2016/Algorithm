//#include <stdio.h>
//
//#define N 11
//
//int s[N] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
//int f[N] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
//
////活动安排问题
//void GreedySelector(int n, int s[], int f[], bool A[]) {
//    A[0] = true;
//    int i;
//    int j = 0;
//    for (i = 1; i < N; i++) {
//        if (s[i] > f[j]) {
//            A[i] = true;
//            j = i;
//        } else
//            A[i] = false;
//    }
//}
//int main() {
//    bool A[N];
//    GreedySelector(N, s, f, A);
//    int i;
//    for (i = 0; i < N; ++i) {
//        if (A[i] == true)
//            printf("%d ", i);
//    }
//    return 0;
//}
//
//
////装载问题
//
//void Loading(int x[],int w[],int c,int n){
//
//}
//
//int main() {
//    bool A[N];
//    GreedySelector(N, s, f, A);
//    int i;
//    for (i = 0; i < N; ++i) {
//        if (A[i] == true)
//            printf("%d ", i);
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 9 //数组元素个数
int array[N] = {2, 1, 6, 3, 5, 4, 8, 7, 9}; //原数组
int B[N]; //在动态规划中使用的数组,用于记录中间结果,其含义三言两语说不清,请参见博文的解释
int len; //用于标示B数组中的元素个数
int LIS(int *array, int n); //计算最长递增子序列的长度,计算B数组的元素,array[]循环完一遍后,B的长度len即为所求
int BiSearch(int *b, int len, int w); //做了修改的二分搜索算法

int main() {
    printf("LIS: %d\n", LIS(array, N));
    int i;
    for (i = 0; i < len; ++i) {
        printf("B[%d]=%d\n", i, B[i]);
    }
    return 0;
}

int LIS(int *array, int n) {
    len = 1;
    B[0] = array[0];
    int i, pos = 0;
    for (i = 1; i < n; ++i) {
        if (array[i] > B[len - 1]) //如果大于B中最大的元素，则直接插入到B数组末尾
        {
            B[len] = array[i];
            ++len;
        } else {
            pos = BiSearch(B, len, array[i]); //二分查找需要插入的位置
            B[pos] = array[i];
        }
    }
    return len;
}

//修改的二分查找算法，返回数组元素需要插入的位置。
int BiSearch(int *b, int len, int w) {
    int left = 0, right = len - 1;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (b[mid] > w)
            right = mid - 1;
        else if (b[mid] < w)
            left = mid + 1;
        else    //找到了该元素，则直接返回
            return mid;
    }
    return left;//数组b中不存在该元素，则返回该元素应该插入的位置
}