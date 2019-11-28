#include <iostream>
#include <stdio.h>

const int N = 10;

void MNS(int C[],int n,int size[N+1][N+1]);
void Traceback(int C[],int size[N+1][N+1],int n,int Net[],int& m);

int main()
{
    int c[] = {0,8,7,4,2,5,1,9,3,10,6};//下标从1开始
    int size[N+1][N+1];
    MNS(c,N,size);
    printf("电路布线最大不相交连线数目为：%d",size[N][N]);
    int Net[N],m;
    Traceback(c,size,N,Net,m);
    printf("\n最大不相交连线分别为:");
    for(int i=m-1; i>=0; i--)
    {
        printf("(%d,%d)",Net[i],c[Net[i]]);
    }
    printf("\n");
    return 0;
}

void MNS(int C[],int n,int size[N+1][N+1])
{
    for(int j=0;j<C[1];j++)
    {
        size[1][j]=0;
    }
    for(int j=C[1]; j<=n; j++)
    {
        size[1][j]=1;
    }
    for(int i=2; i<n; i++)
    {
        for(int j=0; j<C[i]; j++)
        {
            size[i][j]=size[i-1][j];//当i<c[i]的情形
        }
        for(int j=C[i]; j<=n; j++)
        {
            //当j>=c[i]时，考虑(i，c[i])是否属于MNS(i,j)的两种情况
            size[i][j]=size[i-1][j]>size[i-1][C[i]-1]+1?size[i-1][j]:size[i-1][C[i]-1]+1;
        }
    }
    size[n][n]=size[n-1][n]>size[n-1][C[n]-1]+1?size[n-1][n]:size[n-1][C[n]-1]+1;
}

void Traceback(int C[],int size[N+1][N+1],int n,int Net[],int& m)
{
    int j=n;
    m=0;
    for(int i=n;i>1;i--)
    {
        if(size[i][j]!=size[i-1][j])//此时，（i,c[i])是最大不相交子集的一条边
        {
            Net[m++]=i;
            j=C[i]-1;//更新扩展连线柱区间
        }
    }
    if(j>=C[1])//处理i=1的情形
    {
        Net[m++]=1;
    }
}
