#include<stdio.h>
//void count(int* n)
////*��int�� int* 
//{
//	*n =*n+1;
//}
//int main()
//{
//	int i = 0;
//	count(&i);
//	//��ַ����ʱ���ں������ô��ǵü���&ȡ��ַ
//	printf("%d", i);
//
//	count(&i);
//	printf("%d", i);
//	count(&i);
//	printf("%d", i);
//
//	return 0;
//}
//
// 
// 
//��ҵ����
//1.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(unsigned int i)
//{
//	if (i > 9)
//		print(i / 10);//��9��˵����λ�����ϣ���10��ȥһλһֱ��ʣһλ��Ϊ�ݹ�������
//	printf("%d ", i%10);//ÿ����λ�����ϵ�ģ10���ֱֵ������������ĵݹ�����
//	/*if (i < 9)
//	{
//		printf("%d", i);
//	}
//	else
//	{
//		i = i % 10;
//		return print(i);
//		printf("%d ", i);
//	}*/
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//
//	/*printf("%d ",n)�˴�����Ҫ�ٴ����ֵ�����Զ��庯�����Ѿ�д�����*/;
//
//	
//}
//
//2.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//void ret(int n)//�ǵݹ�
//{
//	int j = 0;
//	int a = 0;
//	for (j = 1; j < n; j++)
//	{
//		a = n * j; 
//	}
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	ret(i);
//	
//
//}
//�ݹ�
//int ret(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * (ret(n - 1));
//	
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	
//	printf("%d", ret(a));
//	return 0;
//
//}\
///3.�ݹ�ͷǵݹ�ֱ�ʵ��strlen,strlen��ģ�⣨�ݹ�ʵ�֣�
int my_strlen(char* a)
{
	if (*a == '/0')
		return 0;
	else
		return 1 + my_strlen(a + 1);
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);

	return 0;
}
