#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//描述
//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。
//进阶：时间复杂度：，空间复杂度：
//输入描述：
//输入一行，每行空格分割，分别是年，月，日
//
//输出描述：
//输出是这一年的第几天
int main()
{
    int y, m, d = 0;
    scanf("%d %d %d", &y, &m, &d);
    int sum1 = 0;//先算月一共多少天
    //判断大小月
    int i = 0;//循环月
    int a = 0;
    while (i < m-1)
    {
        i++;
        if (i <= 7 && i != 2)
        {
            if (i % 2 != 0&&i!=1)
            {
                a = 31;
            }
            else if (i % 2 ==0 && i!= 1)
            {
                a = 30;
            }
            else
            {
                a = 31;
            }

        }
        else if (i > 7 && i != 2)
        {
            if (i % 2 != 0)
            {
                a = 30;
            }
            else
            {
                a = 31;
            }
        }
        if (i == 2)
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            {
                a = 29;
            }
            else
            {
                a = 28;
            }
        }
        sum1 += a;
    }

    int sum = 0;
    sum = sum1 + d;
    printf("%d", sum);
}