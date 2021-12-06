#include"game.h"
void menu()
{
	
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
		
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine,ROWS,COLS,"0");
	InitBoard(show.ROWs, COLS,"*");

}
void test()
{
	int input = 0;
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
		case 2:
			printf("退出游戏\n");
		default:
			printf("选择错误");
			break;
		}


	} while (input);

		
}
int main()
{
	test();
	return 0;

}