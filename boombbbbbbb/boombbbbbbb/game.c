#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//列号打印
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//行号打印
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = Easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}


}
//计算雷
static int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return
		  mine[x - 1][y] 
		+ mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y] 
		+ mine[x + 1][y + 1] 
		+ mine[x][y + 1] 
		+ mine[x - 1][y + 1]
		-8*'0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-Easy_count)
	{
		printf("请输入坐标");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//计算xy周围有几个雷
				int n = get_mine_count(mine, x, y);
				show[x][y] = n+'0';//ascii码值
				DisplayBoard(show, row, col);
				win++;
			}

		}
		else
		{
			printf("坐标输入错误，请重新输入\n");
		}
		
	}
	if (win == row * col - Easy_count)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
	
	

}
