#include<stdio.h>
#include<stdlib.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
void plus(n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d * %2d=%2d", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf_s("%d",&n);
	plus(n);

	system("pause");
	
}