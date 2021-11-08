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
		printf("ÇëÑ¡Ôñ:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
				game();
				
				break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;


		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);
}


int main()

{
	test();
	return 0;

}