#include <stdio.h>

void LCSLength(int m, int n, char x[], char y[], int c[8][7], int b[8][7]) {
    int i, j;
    for (i = 1; i <= m; i++) c[i][0] = 0;
    for (i = 1; i <= n; i++) c[0][i] = 0;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (x[i] == y[i]) {
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
}

void LCS(int i, int j, char x[], int b[8][7]) {
    if (i == 0 || j == 0)return;
    if (b[i][j] == 1) {
        LCS(i - 1, j - 1, x, b);
        printf("%c",x[i]);
    } else if (b[i][j] == 2)LCS(i - 1, j, x, b);
    else LCS(i, j - 1, x, b);
}

int main() {
    char x[] = {'A','A','B','C','B','D','A','B'};
    char y[] = {'B','A','D','C','A','B','A'};
    int b[8][7];
    int c[8][7];
    LCSLength(7,6,x,y,c,b);
	LCS(7,6,x,b);
    return 0;
}
