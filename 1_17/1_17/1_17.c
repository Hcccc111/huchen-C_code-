#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n = 0;
    double avg = 0.0;
    int sum = 0;
    int j = 0;
    int arr[] = { 0 };
    int time = 0;
    int time2 = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        //¼ÆËã
        int sz = sizeof(arr) / sizeof(arr[0]);
        for (j = 0; j < i; j++)
        {
            if (arr[j] != 0 && arr[j] > 0)
            {
                sum += arr[j];
            }
            if (arr[j] < 0)
            {
                time++;
            }
            if (arr[j] == 0)
            {
                time2++;
            }
        }
        //Êä³ö
        avg = (sum / (i - time - time2));
        printf("%d %d\n", time, avg);

    }
    return 0;
}