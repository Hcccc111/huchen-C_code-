//KiKi学习了面向对象技术，学会了通过封装属性（变量）和行为（函数）定义类，现在他要设计一个电子日历类TDate。
//它有3个私有数据成员：Month, Day, Year和若干个公有成员函数，要求：
//（1）带有默认形参值的构造函数，默认值为0, 0, 0；
//（2）输出日期函数，用“日 / 月 / 年”格式输出日期；
//（3）设置日期函数，从键盘输入年、月、日。
//输入描述：
//一行，三个整数，用空格分隔，分别表示年、月、日。
//输出描述：
//一行，用“日 / 月 / 年”格式输出日期。
//示例1
//输入：
//2019 12 30
//复制
//输出：
//30 / 12 / 2019
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int Month, Day, Year = 0;
//    scanf("%d %d %d", &Year, &Month, &Day);
//    printf("%d/%d/%d", Day, Month, Year);//偷鸡法
//    return 0;
//}

//输入三行，
//第一行为矩形的长和宽，
//第二行为圆的半径，
//第三行为正方形的边长。
//输出描述：
//三行，分别是矩形、圆、正方形的面积。

int main()
{
    int a = 0;
    int b = 0;
    int r = 0;
    int s = 0;
    double c = 0;
    scanf("%d%d", &a, &b);
    scanf("%d", &r);
    scanf("%d", &s);
    printf("%d\n", a * b);
    c = 3.14 * r * r;
    if (c - (double)(int)c)
    {
        if ((int)(c * 100) % 10)
        {
            printf("%.2lf\n", c);
        }
        else
        {
            printf("%.1lf\n", c);
        }
    }
    else
    {
        printf("%d\n", (int)c);
    }
    printf("%d\n", s * s);
    return 0;
}
