#include<stdio.h>
#include<string.h>
#include<math.h>
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
//	for (i = 0; i < time; i++) //执行k次的单次平移
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //单次平移
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//int main()
//{
//	char a[] = "A,B,C,D";
//	int k = 0;
//	scanf_s("%d", &k);
//	int time=k ;
//	leftRound(  a,time);
//	return 0;
//}

//int main(void)
//{
//    int m = 0;
//    while (scanf_s("%d", &m) != EOF)
//    {
//        //计算
//        int i, a = 0;
//        for (i = 0; i < m; i++)
//        {
//
//            a = m * m - (m - 1);
//            if (i == m - 1)
//            {
//                printf("%d\n", a + (2 * i));
//            }
//            else
//            {
//                printf("%d+", a + (2 * i));
//            }
//
//        }
//
//    }
//
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//
//    while (scanf("%d", &n) != EOF)
//    {
//
//        int m = n * 2 + ((3 * n * (n - 1)) / 2);
//        printf("%d\n", m);
//    }
//    return 0;
//}