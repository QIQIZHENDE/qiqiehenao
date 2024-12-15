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
	char board[ROW][COL];//布置好的雷
	char show[ROW][COL];//存放排出雷的信息
	init_board(show, ROW, COL, '0');
	
	init_board(board, ROW, COL,'*');//初始化棋盘
	print_board(board, ROW, COL);//打印棋盘
	
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