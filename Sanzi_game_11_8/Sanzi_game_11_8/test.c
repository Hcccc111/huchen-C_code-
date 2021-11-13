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
			 printf("玩家赢\n");
			 break;
		 }
		 else if (ret == '#')
		 {
			 printf(" 电脑赢\n");
			 break;
		 }
		 else if (ret == 'Q')
		 {
			 printf("平局");
			 break;
		 }
		 else
		 {
			 printf("继续\n");
		 }
		computergame(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家赢\n");
			break;
		}
		else if (ret == '#')
		{
			printf(" 电脑赢\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("平局");
			break;
		}
		else
		{
			printf("继续\n");
		}
	}
	/*if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf(" 电脑赢\n");
	}
	else
	{
		printf("继续\n");
	}*/


}





void test()
{
	int input = 0;
	srand((unsigned int ) time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;


		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}


int main()

{
	
	test();
	return 0;

}