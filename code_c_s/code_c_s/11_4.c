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
//int Digitsum(int n)
//{
//	if (n > 9)
//		return Digitsum(n / 10) + n % 10;
//	else
//		return n;
//	//if (n> 9)
//	//{
//	//	n = n / 10 % 10;����д�ⲿ��ʱֻ�뵽��n��Ҫ���ÿһλʱ��Ҫ����ǰλ��Ȼ��ȡģ�����ǶԾ��岻���������û�б���ɹ�
//	//}
//	//return n + Digitsum(n);
//}
//
//int main()
//{
//	int a = 1729;
//	
//	int b=Digitsum(a);
//	printf("%d", b);
//
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//int sq(int z,int x)//�˴�Ӧ�����������Σ�һ������nһ������k�η�
//{
//	if (x == 0)
//		return 1;
//	else if (x >=1)
//	{
//		return z * sq(z, x - 1);
//	}
//	//int j = 1;
//	//int k = 1;
//	//scanf_s("%d", &k);����û�뵽���ĸ����������scanf�������������޷�ʵ��
//	//while (j < k)
//	//{
//	//	
//	//}
//	///*if (z < k)
//	//	return a * sq(a);�˴�ֻ�뵽����Ҫ�ٳ�һ�κ���ʵ�ֵݹ飬��û�뵽���ʵ��k�η�
//	//else
//	//	return a;*/
//}
//
//
//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf_s("%d", &a);
//	scanf_s("%d", &c);
//	int b=sq(a,c);//�˴���һ�ε����������k�η���ֵ�����±���ʹ�ò���ֵ���ˣ���Ϊ����Ҫ����ֵֻ����һ����
//	printf("%d", b);
//	return 0;
////}
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1
//int fib(int n)//�ݹ�
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)�������Ƶķǵݹ�д������
//{
//	int a = 0;
//	if (n <= 2)
//	{
//		a = 1;
//	}
//	else 
//	{
//		for (a = 1; a <= n; a++)
//		{
//			a= (n - 1) + (n - 2);
//		}
//		
//	}
//
//}
//�ǵݹ�ʵ��
//int main()
//{
//	int n = 1;
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 1;
//	scanf_s("%d", &n);
//	if (n <= 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		for (int a = 3; a <= n; a++)//1 1 2 3 5 8 13 21 34 55�˴�Ҫע��a�ӵ���������ʼ
//		{
//			sum = num1 + num2;
//			num2 = num1;
//			num1 = sum;
//			
//		}
//	}
//	printf("%d", sum);
//	return 0;
//
//}