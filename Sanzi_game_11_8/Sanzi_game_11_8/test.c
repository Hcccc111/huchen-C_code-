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

}





void test()
{
	int input = 0;
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