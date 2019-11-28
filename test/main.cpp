#include <stdio.h>

void change(int &x ,int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 1,b = 2;
    change(a,b);
    printf("a = %d , b = %d",a,b);
    return 0;
}