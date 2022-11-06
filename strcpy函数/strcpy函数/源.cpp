#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = { "abcdefg" }; //“ª∞„”√∑®
//	char arr2[] = { "hehe" };
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}
#include<assert.h>
char* my_strcpy(char* dest,const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = { "abcdefg" };
	char arr2[] = { "haha" };
	my_strcpy(arr1,arr2);
	printf("%s", arr1);
	return 0;
}