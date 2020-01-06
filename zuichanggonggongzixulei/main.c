#include <stdio.h>

#define M 8
#define N 7

char x[M] = "0abcbdab";
char y[N] = "0bdcaba";

void LCSlength(int m, int n, char x[], char y[], int c[M + 1][N + 1], int b[M + 1][N + 1]) {
    int i, j;
    for (i = 0; i <= m; i++) c[i][0] = 0;
    for (i = 0; i <= n; i++) c[0][i] = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            if (x[i] == y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 1;
            } else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = 2;
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = 3;
            }
        }
}

void LCS(int i, int j, char x[], int b[M + 1][N + 1]) {
    if (i == 0 || j == 0) return;
    if (b[i][j] == 1) {
        LCS(i - 1, j - 1, x, b);
        printf("%c", x[i]);
    } else if (b[i][j] == 2) LCS(i - 1, j, x, b);
    else LCS(i, j - 1, x, b);
}

void show(int x[M + 1][N + 1]) {
    for (int i = 0; i < M + 1; ++i) {
        for (int j = 0; j < N + 1; ++j) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int b[M + 1][N + 1] = {0}, c[M + 1][N + 1];
    LCSlength(M, N, x, y, c, b);
    show(c);
    LCS(M, N, x, b);
    return 0;
}
