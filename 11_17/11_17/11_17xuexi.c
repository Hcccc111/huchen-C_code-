#include<stdio.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
//arr��һ������һά���顣

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
//дһ����������������һ���ַ��������ݡ�
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
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//
//���磺2 + 22 + 222 + 2222 + 22222
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
//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//���� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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
