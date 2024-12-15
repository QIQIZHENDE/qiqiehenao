#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}
int main()
{
	
		int input = 0;
	
	do
	{
		scanf("%d", &input);
		menu();
		printf("请选择>:");
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}