#include<iostream>
using namespace std;
#define N  5 //����N����Ʒ
int C = 10;//����������Ϊc
int v[]={0,6,3,5,4,6};//��Ʒi��ֵΪvi
int w[]={0,2,2,6,5,4};//��Ʒi������Ϊwi
int m[N+1][N+1];//m(i,j)����������Ϊj����ѡ����ƷΪi
int x[N+1];//x[i]=0����i����Ʒ��װ�뱳����x[i]=1����i����Ʒװ�뱳��
void Knapsack(int v[],int w[],int c,int n,int m[][N+1])
{
    //��n��1����
    //i=nʱ
    int jMax=min(w[n]-1,c);//����ʣ����������
    for(int j=0;j<=jMax;j++)
    {
        m[n][j]=0;
    }
    for(int j=w[n];j<=c;j++)
    {
        m[n][j]=v[n];
    }
    //�ӵ�n-1������2��
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
    //��1��
    if(c>=w[1])
    {
        m[1][c]=max( m[2][c],m[2][c-w[1]]+v[1] );
    }

}
//x[i]=0����i����Ʒ��װ�뱳����x[i]=1����i����Ʒװ�뱳��
void Traceback(int m[][N+1],int w[],int c,int n,int x[])//�������Ž�(x1,x2,��,xn)�㷨
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

    for(int i=1;i<=N;i++)//��ʼ��
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
    printf("����ֵ��%d",m[1][C]);
    return 0;
}
