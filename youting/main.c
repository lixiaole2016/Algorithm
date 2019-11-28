#include <stdio.h>
#define M 3

int getMinMoney(int price[M][M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = j + 1; k < i; k++) {
                if (price[j][k] + price[k][i] < price[j][i]) {
                    price[j][i] = price[j][k] + price[k][i];
                }
            }
        }
    }
    return price[0][M - 1];
}

int main() {
    int a[M][M] = {{0, 5, 15},
                   {0, 0, 7},
                   {0, 0, 0}};
    int money = getMinMoney(a);
    printf("%d", money);
    return 0;
}