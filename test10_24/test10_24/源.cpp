#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int number;

    printf("������һ������: ");
    scanf("%d", &number);

    if (number > 0) 
    {
        printf("%d ��������\n", number);
    }
    else {
        printf("%d ����������\n", number);
    }

    return 0;
}