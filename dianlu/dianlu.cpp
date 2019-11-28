#include <iostream>
#include <stdio.h>

const int N = 10;

void MNS(int C[],int n,int size[N+1][N+1]);
void Traceback(int C[],int size[N+1][N+1],int n,int Net[],int& m);

int main()
{
    int c[] = {0,8,7,4,2,5,1,9,3,10,6};//�±��1��ʼ
    int size[N+1][N+1];
    MNS(c,N,size);
    printf("��·��������ཻ������ĿΪ��%d",size[N][N]);
    int Net[N],m;
    Traceback(c,size,N,Net,m);
    printf("\n����ཻ���߷ֱ�Ϊ:");
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
            size[i][j]=size[i-1][j];//��i<c[i]������
        }
        for(int j=C[i]; j<=n; j++)
        {
            //��j>=c[i]ʱ������(i��c[i])�Ƿ�����MNS(i,j)���������
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
        if(size[i][j]!=size[i-1][j])//��ʱ����i,c[i])������ཻ�Ӽ���һ����
        {
            Net[m++]=i;
            j=C[i]-1;//������չ����������
        }
    }
    if(j>=C[1])//����i=1������
    {
        Net[m++]=1;
    }
}
