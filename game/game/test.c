#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("*************  1.play ************\n");
	printf("*************  0.exit ************\n");
	printf("**********************************\n");
}
void game()
{
	char board[ROW][COL];//���úõ���
	char show[ROW][COL];//����ų��׵���Ϣ
	init_board(show, ROW, COL, '0');
	
	init_board(board, ROW, COL,'*');//��ʼ������
	print_board(board, ROW, COL);//��ӡ����
	
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}