#include<stdio.h>
#include<string.h>
#include<math.h>
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //����Ϊ5������£���ת6��11��16...���൱��1�Σ�7��12��17...���൱��2�Σ��Դ����ơ�
//	for (i = 0; i < time; i++) //ִ��k�εĵ���ƽ��
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //����ƽ��
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
//        //����
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