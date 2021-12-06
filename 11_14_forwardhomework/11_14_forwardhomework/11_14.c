#include<stdio.h>
//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//int main()
//{
//	printf("请输入三个数\n");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}
//
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//
//}
//给定两个数，求这两个数的最大公约数
//
//例如：
//
//输入：20 40
//
//输出：20
//int main()
//{
//	int a = 20;
//	int b = 40;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//
//	}
//	printf("%d\n", b);
//	return 0;
//}
//打印1000年到2000年之间的闰年

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//
//输入例子 :
//
//1999 2299
//
////输出例子 : 7
//int cal(int m, int n)
//{
//	int temp = m ^ n;
//	int count = 0;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	while (scanf_s("%d %d", &m, &n) == 2)
//	{
//		printf("%d", cal(m, n));
//	}
//	return 0;
////}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 1789;	
//	Printbit(a);
//	return 0;
//}
//写一个函数返回参数二进制中 1 的个数。
//
//比如： 15    0000 1111    4 个 1
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int b=count_one_bit(a);
//	printf("%d", b);
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:a = %d b = %d\n", a, b);
	return 0;
}