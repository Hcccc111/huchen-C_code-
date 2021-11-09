#include"game.h"

 
void menu()
{
	printf("**************\n");
	printf("*****1.play****\n");
	printf("*****0.exit****\n");
	printf("***************\n");


}

void game()
{
	char board[ROW][COL] = {0};
	initBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		 ret = is_win(board, ROW, COL);
		 if (ret == '*')
		 {
			 printf("���Ӯ\n");
			 break;
		 }
		 else if (ret == '#')
		 {
			 printf(" ����Ӯ\n");
			 break;
		 }
		 else if (ret == 'Q')
		 {
			 printf("ƽ��");
			 break;
		 }
		 else
		 {
			 printf("����\n");
		 }
		computergame(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		else if (ret == '#')
		{
			printf(" ����Ӯ\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("ƽ��");
			break;
		}
		else
		{
			printf("����\n");
		}
	}
	/*if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf(" ����Ӯ\n");
	}
	else
	{
		printf("����\n");
	}*/


}





void test()
{
	int input = 0;
	srand((unsigned int ) time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;


		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}


int main()

{
	
	test();
	return 0;

}