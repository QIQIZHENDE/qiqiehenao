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
		printf("��ѡ��>:");
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}