#include<stdio.h>
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
//}
///3.�ݹ�ͷǵݹ�ֱ�ʵ��strlen,strlen��ģ�⣨�ݹ�ʵ�֣�
#include<windows.h>
//�ݹ�
//int my_strlen(char *pa)
//{
//	if ('\0' == *pa)//�˴������/��\�����޷������ȷ���
//
//	
//		return 0;
//	
//	else
//	
//		return 1 + my_strlen(1 + pa);
//	
//	
//}
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while ('\0' != *pa)
//	{
//		count++;
//		*pa++;
//	}return count;
//
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if(strlen(string+1)>=2)
//		reverse_string(string+1);
//	*(string + len - 1) = tmp;
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);//�˴����ʱ���˴�����Ϊ����reverse_string(arr);�Ѿ����¼�������arrֵ��ֱ�����arr����
//
//
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//���룺1729�������19
void Digitsum(int n)
{
	if(n)
}

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	Digitsum(a);
	printf("%d", a);

}