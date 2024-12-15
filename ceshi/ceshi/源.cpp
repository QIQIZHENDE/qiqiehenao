#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int IQ = 0;
    scanf("%d", &IQ);
    if (IQ > 140)
    {
        printf("Genius\n");
    }
    else 
    {
        printf("不是天才\n");
    }



    return 0;
}