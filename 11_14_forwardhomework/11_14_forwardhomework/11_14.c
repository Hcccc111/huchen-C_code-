#include<stdio.h>
//д���뽫�������������Ӵ�С�����
//
//���磺
//
//���룺2 3 1
//
//�����3 2 1
//int main()
//{
//	printf("������������\n");
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
//дһ�������ӡ1 - 100֮������3�ı���������
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
//���������������������������Լ��
//
//���磺
//
//���룺20 40
//
//�����20
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
//��ӡ1000�굽2000��֮�������

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


//дһ�����룺��ӡ100~200֮�������
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

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//
//�������� :
//
//1999 2299
//
////������� : 7
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


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

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
//дһ���������ز����������� 1 �ĸ�����
//
//���磺 15    0000 1111    4 �� 1
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

//����������ʱ������������������������

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������:a = %d b = %d\n", a, b);
	return 0;
}