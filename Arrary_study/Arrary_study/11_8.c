#include<stdio.h>
//void bubble_sort(int *arr[],int sz)//注意传参取地址
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//i和j都要从0开始
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
//	for (i = 0; i < 10; i++)//此处的i要对应好数组中有几个元素
//	{
//		printf(" %d", arr[i]);
//		 
//	}
//	return 0;
//
//}

/*
创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值*/
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

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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
	printf("输入5个数");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("5个数");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		int tmp = arr1[i];//此处想不明白就用实例即可
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
	//向外输出的时候要注意分开循环，不然就是1一个数2数组出一个数
}