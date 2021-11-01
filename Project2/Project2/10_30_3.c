//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("1.play");
//	printf("0.exit");
//}
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	while (1)
//	{
//		scanf_s("%d", &guess);
//
//		if (guess < r)
//		{
//			printf("小了\n");
//		}
//		else if (guess >r)
//		{
//			printf("大了\n");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//			printf("退出游戏");
//		default:
//			printf("选择错误\n");
//			break;
//
//
//		}
//
//	} while (input);
//		return 0;
//}