#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf( "% s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18}};
//    fun(students + 1);
//    return 0;
//}
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//int main()
//{
//	int total = 0;
//	int money = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("%d", total);
//
//	return 0;
//}


//int main()
//{
//    int h = 0;
//    int sd = 0;
//    int s = 0;
//    int sum = 0;
//    scanf_s("%d", &sum);
//    
//    h = sum / 60 % 60;
//    sd = sum % 60;
//    s = sd % 60;
//    printf("%d %d %d ", h, sd, s);
//    return 0;
//}
//дһ�����������������Ľϴ�ֵ
//int compare(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c=compare(a, b);
//	printf("%d", c);
//	return 0;
//}