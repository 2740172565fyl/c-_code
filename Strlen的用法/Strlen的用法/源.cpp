//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(char *str)//传的是a的地址
//{
//	int count=0;		//计数器
//	assert(str != NULL);//断延
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char len[] = {"abcdef"};
//	printf("%d", my_strlen(len));//用strlen实现计算字符串长度
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(char* str)//传的是a的地址
//{
//	int count = 0;		//计数器
//	assert(str != NULL);//断延
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strlen(const char* str)//传的是a的地址
{
	int count = 0;		//计数器
	assert(str != NULL);//断延
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	if (my_strlen("abc") - my_strlen("abcdef") > 0)
		printf("hehe");
	else
		printf("haha");
	return 0;
}