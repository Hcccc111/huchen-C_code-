#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n-i-1; j++)
//        {
//            printf("  ");
//        }
//        for (j = 0; j <= i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
//ʾ��1
//���룺
//2008 2
//����
//�����
//29
#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        if (month <= 7 && month % 2 == 0 && month != 2)
        {
            day = 30;
        }
        else if (month <= 7 && month % 2 != 0 && month != 2)
        {
            day = 31;
        }
        if (month > 7 && month % 2 == 0 && month != 2)
        {
            day = 31;
        }
        else if (month > 7 && month % 2 != 0 && month != 2)
        {
            day = 30;
        }
        else if (month == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
        {
            day = 29;
        }
        else if (month == 2 && ((year % 400 != 0) || (year % 4 != 0 && year % 100 == 0)))
        {
            day = 28;
        }
        printf("%d\n", day);
    }

    return 0;
}