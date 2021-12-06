#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//
//数据范围：
//输入描述：
//一行输入整数n（0 <= n < 31）。
//    输出描述：
//    输出对应的2的n次方的结果。
//    示例1
//int main()
//{
//    int n = 0;
//    while (scanf_s("%d", &n) != EOF)
//    {
//        printf("%d", 1 << n);
//    }
//
//    return 0;
//}
//
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//输入描述：
//一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述：
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。

#include<stdio.h>
int main()
{
    int max = 0;
    int min = 100;
    int i = 0;
    int sum = 0;
    int score = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d ", &score);
        sum += score;
        if (score > max)
        {
            max = score;
        }
        if (score < min)
        {
            min = score;
        }
    }
    printf("%.2f", (sum - max - min) / 5.0);
    return 0;
}