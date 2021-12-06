#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//    int arr1[] = { 0 };
//    int arr2 []={0};
//    /*gets(arr1);*/
//    scanf_s("%d", &arr1);
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz; j++)
//        {
//            if (arr1[i] == arr1[j])
//            {
//                arr1[j] = arr1[j] / 10;   
//            }   
//
//            printf("%d ", arr1[i]);
//
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < 100000; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int eva = 12;
//    int ret = 0;
//    int time1 = 0;
//    int time2 = 0;
//    int i = 0;
//    ret = n / eva;
//    int ret2 = 0;
//    if (n == 0)
//    {
//        time1 = 2;
//        printf("%d", time1);
//        return 0;
//    }
//    for (i = 0; i < 99999; i++)
//    {
//
//        if (ret == i)
//        {
//            time1 = 4*ret;
//        }
//        else
//        {
//            /*while (ret)
//            {
//                
//                
//            }
//            */
//            ret = n / eva;
//            time1 = 4 * ret;
//            ret2 = n % eva;
//            if (ret2 != 12 && ret2 != 0)
//            {
//                time2 = 2;
//
//            }
//        }
//      
//    }
//    printf("%d", time1 + time2);
//    
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n, m = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int a, b = 0;

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < m; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    for (a = 0; a < m; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("%d ", arr[b][a]);
        }
        printf("\n");
    }
    return 0;
}