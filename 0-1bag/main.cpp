#include<iostream>
using namespace std;
#define N  5 //共有N个物品
int C = 10;//背包总重量为c
int v[]={0,6,3,5,4,6};//物品i价值为vi
int w[]={0,2,2,6,5,4};//物品i的重量为wi
int m[N+1][N+1];//m(i,j)：背包容量为j，可选择物品为i
int x[N+1];//x[i]=0，第i件物品不装入背包，x[i]=1，第i件物品装入背包
void Knapsack(int v[],int w[],int c,int n,int m[][N+1])
{
    //由n→1计算
    //i=n时
    int jMax=min(w[n]-1,c);//背包剩余容量上限
    for(int j=0;j<=jMax;j++)
    {
        m[n][j]=0;
    }
    for(int j=w[n];j<=c;j++)
    {
        m[n][j]=v[n];
    }
    //从第n-1个到第2个
    for(int i=n-1;i>1;i--)
    {
        jMax=min(w[i]-1,c);
        for(int j=0;j<=jMax;j++)
        {
            m[i][j]=m[i+1][j];
        }
        for(int j=w[i];j<=c;j++)
        {
            m[i][j]=max( m[i+1][j],m[i+1][j-w[i]]+v[i]  );
        }
    }
    //第1个
    if(c>=w[1])
    {
        m[1][c]=max( m[2][c],m[2][c-w[1]]+v[1] );
    }

}
//x[i]=0，第i件物品不装入背包，x[i]=1，第i件物品装入背包
void Traceback(int m[][N+1],int w[],int c,int n,int x[])//构造最优解(x1,x2,…,xn)算法
{
    for(int i=1;i<n;i++)
    {
        if(m[i][c]==m[i+1][c])
        {
            x[i]=0;
        }
        else
        {
            x[i]=1;
            c-=w[i];
        }
    }
    x[n]=(m[n][c])?1:0;
}
int main()
{

    for(int i=1;i<=N;i++)//初始化
        for(int j=0;j<=C;j++)
            m[i][j]=0;
    Knapsack( v, w, C, N, m);
    Traceback(m,w,C, N, x);
    for(int i=1;i<=N;i++)
    {
        if(i==1)
            cout<<x[i];
        else
            printf(" %d",x[i]);
    }
    printf("\n");
    printf("最大价值：%d",m[1][C]);
    return 0;
}