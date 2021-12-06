#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char a[] = "hello";
//	int b=my_strlen(a);
//	printf("%d", b);
//	return 0;
//}
char * my_strcpy(char * dest, const char  * src)
{
	assert(dest && src);
	char* ret = dest;
	while(*dest++=*src++)
	{
		;
	}
	return ret	;
}
int main()
{
	char a[] = "abcd";
	char b[] = "erty";
	my_strcpy(a, b);
	printf("%s", a);
	return 0;
}