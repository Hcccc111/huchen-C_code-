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
void Digitsum(int n)
{
	if(n)
}

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	Digitsum(a);
	printf("%d", a);

}