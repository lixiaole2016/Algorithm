#include <stdio.h>

#define N 7 //汽车加满油的续航
#define K 7 //加油站数量
int dis[K + 1] = {1, 2, 3, 4, 5, 1, 6, 6};

int jiayou(int n, int k, int dis[]) {
    int i;
    int count = 0;
    int r = n; //变量r用来记录当前汽车中的汽油量
    for (i = 0; i <= k; i++) {
        if (r >= dis[i]) {
            r -= dis[i];
        } else {
            r = n - dis[i];
            count++;
        }
    }
    return count;
}

int main() {
    printf("%d\n", jiayou(N, K, dis));
    return 0;
}
