#include<stdio.h>
//void bubble_sort(int *arr[],int sz)//ע�⴫��ȡ��ַ
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//i��j��Ҫ��0��ʼ
//	{
//		int j = 0;
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//					arr[j + 1] = arr[j];
//					arr[j] = tmp;
//			}
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 3,1,5,2,4,9,0,7,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)//�˴���iҪ��Ӧ���������м���Ԫ��
//	{
//		printf(" %d", arr[i]);
//		 
//	}
//	return 0;
//
//}

/*
����һ���������飬��ɶ�����Ĳ���

ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ*/
//void init(int *arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		while (arr[i] != 0)
//		{
//			arr[i] = 0;
//		}
//		printf("%d", arr[i]);
//
//	}
//}
//void print(int *arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}
//void reverse(int* arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		 arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//print(arr,sz);
//	//init(arr);
//	reverse(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void change(int *arra[], int *arrb[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arra[i];
//		arra[i] = arrb[i];
//		arrb[i] = tmp;
//		
//	}
//
//}
//int main()
//{
//	int arra[] = { 1,2,3};
//	int arrb[] = { 6,4,5 };
//	int sz = sizeof(arra) / sizeof(arra[0]);
//	change(arra, arrb,sz);
//	return 0;
//}
int main()
{
	int arr1[5] = {0};
	int arr2[5] = {0};
	int i = 0;
	printf("����5����");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("5����");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		int tmp = arr1[i];//�˴��벻���׾���ʵ������
		arr1[i] = arr2[i];
		arr2[i] =tmp;
		

	}
	
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", arr1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf(" %d", arr2[i]);
	}
	//���������ʱ��Ҫע��ֿ�ѭ������Ȼ����1һ����2�����һ����
}