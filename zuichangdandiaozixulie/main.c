#include <stdio.h>
#define len(a) (sizeof(a) / sizeof(a[0])) //数组长度
int lis(int arr[], int len)
{
    int longest[len];
    for (int i=0; i<len; i++)
        longest[i] = 1;

    for (int j=1; j<len; j++) {
        for (int i=0; i<j; i++) {
            if (arr[j]>arr[i] && longest[j]<longest[i]+1){ //注意longest[j]<longest[i]+1这个条件，不能省略。
                longest[j] = longest[i] + 1; //计算以arr[j]结尾的序列的最长递增子序列长度
            }
        }
    }

    int max = 0;
    for (int j=0; j<len; j++) {
        printf("%d,",longest[j]);
//        cout << "longest[" << j << "]=" << longest[j] << endl;
        if (longest[j] > max) max = longest[j];  //从longest[j]中找出最大值
    }
    return max;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 2, 3, 8}; //测试数组
    int ret = lis(arr, len(arr));
    printf("\nmax increment substring len=%d",ret);
//    cout << "max increment substring len=" << ret << endl;
    return 0;
}



