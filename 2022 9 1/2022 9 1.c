#include<stdio.h>
#include<math.h>
#include"game.h"
//void main()
//{
//	float a, b, c, x1, x2,d;
//	printf("请输入系数a,b,c:");
//	scanf_s("%f,%f,%f", &a, &b, &c);
//	d = b * b - 4 * a * c;
//	if (d > 0)
//	{
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf("x1=%f,x2=%f\n", x1, x2);
//
//	}
//	else if (d < 0)
//	{
//		printf("没有实根！\n");
//	}
//	else
//	{
//		x1 = x2 = -b / (2 * a);
//		printf("x1=x2=%f\n", x1);
//	}
//}
void menu()
{
	printf("******************************\n");
	printf("****   1 play     0 退出 *****\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };//数组，存放走出的棋盘信息
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
}
void test()
{
	int input;
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				//printf("三子棋\n");
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;
		}
	} while (input);
}
int main() 
{
	test();
	return 0;
 }