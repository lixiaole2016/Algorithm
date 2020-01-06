#include <stdio.h>
#include <stdlib.h>

#define QUEEN 5
#define INITIAL -10000

int a[QUEEN];

int find(int row, int col)    //判断第row行第col列是否可以放置皇后
{
    int i;
    for (i = 0; i < QUEEN; ++i)  //对棋盘进行扫描
    {   //判断列冲突与斜线上的冲突
        if (a[i] == col || abs(i - row) == abs(a[i] - col))
            return 0;
    }
    return 1;
}

void display() {
    int i, j;
    for (i = 0; i < QUEEN; ++i) {
        for (j = 0; j < QUEEN; ++j) {
            if (a[i] != j)
                printf("%c ", 'x');
            else
                printf("%c ", 'Q');
        }
        printf("\n");
    }
    for (i = 0; i < QUEEN; ++i)
        printf("(%d,%d) ", i, a[i]);
    printf("\n");
    printf("--------------------------------\n");
}

void queen() {
    int n = 0;
    int i = 0, j = 0;
    while (i < QUEEN) {
        while (j < QUEEN) {
            if (find(i, j)) {
                a[i] = j;
                j = 0;
                break;
            } else {
                ++j;
            }
        }
        if (a[i] == INITIAL) {
            if (i == 0)
                break;
            else {
                --i;
                j = a[i] + 1;
                a[i] = INITIAL;
                continue;
            }
        }
        if (i == QUEEN - 1) {
            printf("answer %d : \n", ++n);
            display();
            j = a[i] + 1;
            a[i] = INITIAL;
            continue;
        }
        ++i;
    }
}

int main() {
    int *p;
    for (p = a; p < a + QUEEN; ++p) {
        *p = INITIAL;
    }
    queen();
    return 0;
}
