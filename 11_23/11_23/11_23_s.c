#include<stdio.h>
#include<assert.h>
//ģ��ʵ��strlen
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
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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