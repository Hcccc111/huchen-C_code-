#include<stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		int* p = arr[i];
//		printf("%d",p);
//	}
//	return 0;
//}
//写一个函数，可以逆序一个字符串的内容。
//#include<stdio.h>
//void reverse(char* a)
//{
//	char* left = a;
//	char* right = a + strlen(a) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	reverse(a);
//	printf("%s", a);
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//
//	scanf_s("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 9999; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		int count =1;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
// 
//1 3 5 7 9 13 11 9 7 5 3 1
#include<string.h>
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	scanf_s("%d", &line);
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	
}
