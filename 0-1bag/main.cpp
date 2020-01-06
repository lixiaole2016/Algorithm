#include <stdio.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))
int w[] = {0, 3, 6, 3, 8, 6};//商品重量
int v[] = {0, 4, 6, 6, 12, 10};//商品价值
int W = 10; //背包容量
int c[6][11] = {0};//c[i][j]表示在商品1到i中，背包容量为j时，最大价值
void Package0_1(int w[], int v[], int W, int n, int c[][11]) {

    for (int i = 1; i <= n; i++)          //逐行填表c[i][j]
    {
        for (int j = 1; j <= W; j++) {
            if (i == 1)       //填写第1行时，不参考其他行
            {
                if (j < w[i])
                    c[i][j] = 0;
                else
                    c[i][j] = v[i];
            } else {
                if (j < w[i])  //背包容量小于商品i的重量，商品i一定不选
                {
                    c[i][j] = c[i - 1][j];
                } else {
                    c[i][j] = max(c[i - 1][j], v[i] + c[i - 1][j - w[i]]);//比较选与不选商品i的背包总价值大小
                }
            }
        }
    }
    for (int m = 1; m < 6; m++) {
        for (int n = 0; n < 11; n++) {
            printf("%d ",c[m][n]);
        }
        printf("\n");
    }
}

void Print_Package0_1(int c[][11])  //构造解
{
    int i = 5;
    int j = 10;
    printf("sumvalue:%d\n",c[i][j]);
    while (i != 1) {
        if (c[i][j] == c[i - 1][j]) {
            printf("%d is pick\n",i);
        } else {
            printf("%d is not pick\n",i);
            j = j - w[i];
        }
        i--;
    }

    if (c[i][j] == 0)   //
    {
        printf("%d is not pick\n",i);
    } else {
        printf("%d is pick\n",i);
    }

}

int main() {

    Package0_1(w, v, W, 5, c);
    Print_Package0_1(c);
    return 0;
}