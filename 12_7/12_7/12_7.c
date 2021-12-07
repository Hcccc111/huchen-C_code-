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
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//示例1
//输入：
//2008 2
//复制
//输出：
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