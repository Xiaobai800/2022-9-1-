#include<stdio.h>
#include<math.h>
#include"game.h"
//void main()
//{
//	float a, b, c, x1, x2,d;
//	printf("������ϵ��a,b,c:");
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
//		printf("û��ʵ����\n");
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
	printf("****   1 play     0 �˳� *****\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };//���飬����߳���������Ϣ
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
}
void test()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				//printf("������\n");
				break;
			case 0:
				printf("�˳�\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
}
int main() 
{
	test();
	return 0;
 }