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
	char board[ROW][COL];
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择出错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}