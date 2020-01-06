/*
	String distance
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int getDis(string a, string b, int k) {
    int al = a.length();
    int bl = b.length();
    int i, j;

    int **val = new int *[al + 1];
    for (i = 0; i <= al; i++)
        val[i] = new int[bl + 1];
    // 初始化数组，将一个字符串全为空格时的扩展距离预置在数组中
    val[0][0] = 0;
    for (i = 1; i <= al; i++)
        val[i][0] = i * k;
    for (i = 1; i <= bl; i++)
        val[0][i] = i * k;
    // 动态规划
    for (i = 1; i <= al; i++)
        for (j = 1; j <= bl; j++)
            val[i][j] = min(min(val[i - 1][j] + k, val[i][j - 1] + k),val[i - 1][j - 1] + abs(a[i - 1] - b[j - 1]));
    return val[al][bl];
}

int main() {
    string A, B;
    int k;
    while (cin >> A >> B >> k) {
        cout << getDis(A, B, k) << endl;
    }
}