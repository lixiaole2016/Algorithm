#include <iostream>
#include <string>

using namespace std;

int min3Value(int a, int b, int c) {
    int tmp = (a <= b ? a : b);
    return (tmp <= c ? tmp : c);
}


int EditDis(string strA, string strB) {
    int nLenA = strA.length();
    int nLenB = strB.length();
    int **matrix = new int *[nLenA + 1];
    for (int i = 0; i != nLenA + 1; i++) {
        matrix[i] = new int[nLenB + 1];
    }
    // 动态规划 计算
    // 初始化数组
    matrix[0][0] = 0;
    int p, q;
    // j = 0; edit(i, j) = i
    for (p = 1; p != nLenA + 1; p++) {
        matrix[p][0] = p;
    }
    // i = 0; edit(i,j) = j
    for (q = 1; q != nLenB + 1; q++) {
        matrix[0][q] = q;
    }
    // i>0, j>0
    for (int j = 1; j != nLenA + 1; j++) {
        for (int k = 1; k != nLenB + 1; k++) {
            int Fjk = 0;
            if (strA[j - 1] != strB[k - 1]) {
                Fjk = 1;
            }
            matrix[j][k] = min3Value(matrix[j - 1][k] + 1, matrix[j][k - 1] + 1, matrix[j - 1][k - 1] + Fjk);
        }
    }
    // 输出距离矩阵
    // 第一行输出字符串b
    // 第一列输出字符串A
    cout << "*****************************" << endl;
    cout << "字符串编辑距离矩阵如下：\n";
    for (p = -1; p != nLenA + 1; p++) {
        for (q = -1; q != nLenB + 1; q++) {
            //cout.width(3),cout<<matrix[p][q];
            cout.width(3);
            if (p == -1 && q == -1) {
                cout << " ";
            } else if (p + q == -1) {
                cout << "NUL";
            } else if (p == -1 && q > 0) {
                cout << strB[q - 1];
            } else if (q == -1 && p > 0) {
                cout << strA[p - 1];
            } else {
                cout << matrix[p][q];
            }
        }
        cout << endl;
    }
    cout << "*****************************" << endl;
    //
    int nEditDis = matrix[nLenA][nLenB];
    for (int m = 0; m != nLenA + 1; m++) {
        delete[] matrix[m];
    }
    delete[] matrix;


    return nEditDis;
}


int main() {
    string strA("fxpimu");
    string strB("xwrs");
    int nDist = EditDis(strA, strB);
    cout << "The edit dis is  " << nDist << endl;
    return 0;
}