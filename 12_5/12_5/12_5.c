#include<stdio.h>
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//
//数据范围：序列长度和序列中的值都满足 1 \le n \le 501≤n≤50
//输入描述：
//第一行输入一个整数(0≤N≤50)。
//
//第二行输入N个整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行删除的一个整数。
//
//输出描述：
//输出为一行，删除指定数字之后的序列。
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d ", &arr[i]);
//
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < a; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n, m = 0;
    int arr[n][m];
    scanf("%d", &n);
    for (m = 0; m <= n; m++)
    {
        int a, b = 0;
        for (a = 0; a <= n; a++)
        {
            for (b = 0; b <= m; b++)
            {
                while (a == b)
                {
                    arr[a][b] = "* ";
                }
                while (a == 0)
                {
                    arr[a][b] = "* ";
                }
                if (a != b && a != 0)
                {
                    arr[a][b] = " ";
                }
            }
            printf("\n");
        }
        printf("%d", arr[a][b]);
    }
    return 0;
}