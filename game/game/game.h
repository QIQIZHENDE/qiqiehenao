#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define EASY_COUNT 10

//ͷ�ļ�����������
void Init_board(char board[ROW][COL], int row, int col,char set);
//��ӡ����
void Print_board(char board[ROW][COL], int row, int col);
//������
void SetMine(char board[ROW][COL], int row, int col);
//����
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);