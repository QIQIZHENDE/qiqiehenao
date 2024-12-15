#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void init_board(char board[ROW][COL], int row, int col,char set)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	printf("--------É¨À×ÓÎÏ·--------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROW][COL], int x, int y)
{
	return(mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y]
		+ mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}
void FineMine(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col- EASY_COUNT)
	{
		printf("ÇëÊäÈëÒªÅÅ²éµÄ×ø±ê:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
				print_board(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				print_board(show, ROW, COL);
				win++;
			}
			if (win == row * col - EASY_COUNT)
			{
				printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");
				print_board(show, ROW, COL);
			}
		}
	}
}