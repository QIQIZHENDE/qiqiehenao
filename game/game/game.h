#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define EASY_COUNT 10

//头文件中声明函数
void Init_board(char board[ROW][COL], int row, int col,char set);
//打印棋盘
void Print_board(char board[ROW][COL], int row, int col);
//布置雷
void SetMine(char board[ROW][COL], int row, int col);
//排雷
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);