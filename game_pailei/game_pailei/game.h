#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#define EASY_COUNT 100.

//ͷ�ļ�����������
void Init_board(char board[ROW][COL], int row, int col);
//��ӡ����
void Print_board(char board[ROW][COL], int row, int col);
//������
void SetMine(char board[ROW][COL], int row, int col);
