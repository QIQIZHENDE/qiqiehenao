#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int number;

    printf("请输入一个整数: ");
    scanf("%d", &number);

    if (number > 0) 
    {
        printf("%d 是正数。\n", number);
    }
    else {
        printf("%d 不是正数。\n", number);
    }

    return 0;
}