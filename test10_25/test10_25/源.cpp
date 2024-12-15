#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 0;


    //5¸öÑ§Éú
    for (i = 0; i < 5; i++)
    {
        double sum = 0.0;
        int j = 0;
        double score = 0.0;
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &score);
            sum += score;
            printf("%.1lf ", score);
        }
        printf("%.1lf", sum);
    }
    return 0;
}