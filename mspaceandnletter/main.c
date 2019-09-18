#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define m 10 //字母的个数
#define n 50 //空格的个数
char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main() {
    char space[n];
    //n个空格
    int i;
    for (i = 0; i < n; i++) {
        space[i] = ' ';
    }
    int a[m];
    srand(time(0));
    for (i = 0; i < m; i++) {
        a[i] = rand() % 52;
    }
    for (i = 0; i < m; i++) {
        int index = rand() % n;
        if (space[index] == ' ') {
            space[index] = letter[a[i]];
        } else {
            i--;
            continue;
        }
    }
    space[n] = '\0';
    puts(space);
    return 0;
}