#include<stdio.h>
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
//}
///3.递归和非递归分别实现strlen,strlen的模拟（递归实现）
#include<windows.h>
//递归
//int my_strlen(char *pa)
//{
//	if ('\0' == *pa)//此处搞混了/和\导致无法输出正确结果
//
//	
//		return 0;
//	
//	else
//	
//		return 1 + my_strlen(1 + pa);
//	
//	
//}
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while ('\0' != *pa)
//	{
//		count++;
//		*pa++;
//	}return count;
//
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
////编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if(strlen(string+1)>=2)
//		reverse_string(string+1);
//	*(string + len - 1) = tmp;
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);//此处输出时犯了错误，因为上面reverse_string(arr);已经重新计算完了arr值，直接输出arr即可
//
//
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//输入：1729，输出：19
//int Digitsum(int n)
//{
//	if (n > 9)
//		return Digitsum(n / 10) + n % 10;
//	else
//		return n;
//	//if (n> 9)
//	//{
//	//	n = n / 10 % 10;我在写这部分时只想到了n想要输出每一位时需要除当前位数然后取模，但是对具体不清楚，导致没有编译成功
//	//}
//	//return n + Digitsum(n);
//}
//
//int main()
//{
//	int a = 1729;
//	
//	int b=Digitsum(a);
//	printf("%d", b);
//
//}


//编写一个函数实现n的k次方，使用递归实现

//int sq(int z,int x)//此处应该有两个整形，一个接受n一个接受k次方
//{
//	if (x == 0)
//		return 1;
//	else if (x >=1)
//	{
//		return z * sq(z, x - 1);
//	}
//	//int j = 1;
//	//int k = 1;
//	//scanf_s("%d", &k);由于没想到在哪个过程中添加scanf导致整个函数无法实现
//	//while (j < k)
//	//{
//	//	
//	//}
//	///*if (z < k)
//	//	return a * sq(a);此处只想到了需要再乘一次函数实现递归，但没想到如何实现k次方
//	//else
//	//	return a;*/
//}
//
//
//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf_s("%d", &a);
//	scanf_s("%d", &c);
//	int b=sq(a,c);//此处第一次调用忘记添加k次方的值，导致报错使用参数值少了，因为函数要两个值只给了一个。
//	printf("%d", b);
//	return 0;
////}
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
//int fib(int n)//递归
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)函数形势的非递归写不出来
//{
//	int a = 0;
//	if (n <= 2)
//	{
//		a = 1;
//	}
//	else 
//	{
//		for (a = 1; a <= n; a++)
//		{
//			a= (n - 1) + (n - 2);
//		}
//		
//	}
//
//}
//非递归实现
//int main()
//{
//	int n = 1;
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 1;
//	scanf_s("%d", &n);
//	if (n <= 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		for (int a = 3; a <= n; a++)//1 1 2 3 5 8 13 21 34 55此处要注意a从第三个数开始
//		{
//			sum = num1 + num2;
//			num2 = num1;
//			num1 = sum;
//			
//		}
//	}
//	printf("%d", sum);
//	return 0;
//
//}