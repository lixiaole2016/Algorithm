//编辑距离问题
#include <stdio.h>
#include <string.h>

int min(int insert, int delete, int edit) {
    int tmp = insert < delete ? insert : delete;
    return tmp < edit ? tmp : edit;
}

int levenshtein(char a[], char b[]) {
    int i = 0, j = 0, ai = 0, bi = 0;
    int m = strlen(a);
    int n = strlen(b);
    if (m == 0) {
        return n;
    } else if (n == 0) {
        return m;
    }
    int solutionMatrix[m][n];
    for (i = 0; i < m + 1; i++) {
        solutionMatrix[i][0] = i;
    }
    for (j = 0; j < n + 1; j++) {
        solutionMatrix[0][j] = j;
    }
    for (i = 1; i < m + 1; i++) {   //i = 1,j = 1, 2, 3，以行开始填充
        ai = a[i - 1];
        for (j = 1; j < n + 1; j++) {
            bi = b[j - 1];
            int flag = (ai == bi) ? 0 : 1;    //根据公式，如果s1[i] = s2[j]，则d[i,j]=d[i-1,j-1]，如果s1[i] ≠ s2[j]，则其中一个公式为d[i,j]=d[i-1,j-1]+1
            solutionMatrix[i][j] = min(solutionMatrix[i][j - 1] + 1, solutionMatrix[i - 1][j] + 1,
                                       solutionMatrix[i - 1][j - 1] + flag);
        }
    }
    return solutionMatrix[m][n];
}

int main() {
    char a[] = "abc";
    char b[] = "abf";
    int editDistance = levenshtein(a, b);
    printf("%d", editDistance);
    return 0;
}