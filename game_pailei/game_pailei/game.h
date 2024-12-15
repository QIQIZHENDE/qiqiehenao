#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#define EASY_COUNT 100.

//头文件中声明函数
void Init_board(char board[ROW][COL], int row, int col);
//打印棋盘
void Print_board(char board[ROW][COL], int row, int col);
//布置雷
void SetMine(char board[ROW][COL], int row, int col);
