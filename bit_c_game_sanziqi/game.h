
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
//1.玩家赢-*
//2.电脑赢-#
//3.平局-Q
//4.继续-C
char IsWin(char board[ROW][COL], int row, int col);