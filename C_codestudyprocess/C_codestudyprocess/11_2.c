#include<stdio.h>
//void count(int* n)
////*在int后 int* 
//{
//	*n =*n+1;
//}
//int main()
//{
//	int i = 0;
//	count(&i);
//	//传址调用时，在函数引用处记得加上&取地址
//	printf("%d", i);
//
//	count(&i);
//	printf("%d", i);
//	count(&i);
//	printf("%d", i);
//
//	return 0;
//}
//
// 
// 
//作业环节
//1.递归方式实现打印一个整数的每一位
//void print(unsigned int i)
//{
//	if (i > 9)
//		print(i / 10);//比9大说明两位数以上，除10减去一位一直到剩一位，为递归条件。
//	printf("%d ", i%10);//每个两位数以上的模10输出值直到不满足上面的递归条件
//	/*if (i < 9)
//	{
//		printf("%d", i);
//	}
//	else
//	{
//		i = i % 10;
//		return print(i);
//		printf("%d ", i);
//	}*/
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//
//	/*printf("%d ",n)此处不需要再次输出值，在自定义函数中已经写好输出*/;
//
//	
//}
//
//2.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//void ret(int n)//非递归
//{
//	int j = 0;
//	int a = 0;
//	for (j = 1; j < n; j++)
//	{
//		a = n * j; 
//	}
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	ret(i);
//	
//
//}
//递归
//int ret(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * (ret(n - 1));
//	
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	
//	printf("%d", ret(a));
//	return 0;
//
//}\
///3.递归和非递归分别实现strlen,strlen的模拟（递归实现）
int my_strlen(char* a)
{
	if (*a == '/0')
		return 0;
	else
		return 1 + my_strlen(a + 1);
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);

	return 0;
}
