#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = { "abcde" };
//	char arr2[] = { "abcd" }; //vs2022�������������ͬΪ0�����arr1>arr2,�����Ϊ1����֮��Ϊ-1��
//	printf("%d", strcmp(arr1, arr2));
//	return 0;
//}
#include<assert.h>
int my_strcmp(char* dest, char* src)
{
	assert(*dest && *src);
	while (*dest == *src)
	{
		if (*dest == '\0')
		{
			return 0;
		}
		*dest++;
		*src++;
	}
	return(*dest - *src);
}
int main()
{
	char arr1[] = { "abcde" };
	char arr2[] = { "abcd" };
	printf("%d\n",my_strcmp(arr1, arr2));
}