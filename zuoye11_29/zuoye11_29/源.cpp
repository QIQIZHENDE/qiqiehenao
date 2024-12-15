#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int i = 0;
//	scanf("%d", &input);
//	for (i = 1; i <= input; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= input; j++)
//		{
//			printf("%d*%d=%d\t", i, j,i*j);
//		}
//		
//	}
//	
//	return 0;
//}
void swap(int *b, int *a)
{
	int tmp;
	*a = tmp;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 3;
	int b = 5;
	swap(&a, &b);
	 printf("%d %d", a, b);
	return 0;
}