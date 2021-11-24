#include<stdio.h>
#include<assert.h>
//模拟实现strlen
//int my_strlen(const char* a)
//{
//	assert( a != NULL);
//	const char* end = a;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - a;
//
//}
//int main()
//{
//	char a[] = "abcde";
//	int b = my_strlen(a);
//	printf("%d", b);
//	return 0;
//}
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//int order_arr(int* arr)
//{
//	int sz = sizeof(arr);
//	int i = 0;
//	int left = 0;
//	for (i = 1, i < sz, i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = "1234567";
//	int arr2 []=order_arr(arr);
//	printf("%d", arr2);
//	return 0;
//}
int main()
{
    char a[1000] = { 0 };
    int i = 0;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d", strlen(a));
    return 0;
}