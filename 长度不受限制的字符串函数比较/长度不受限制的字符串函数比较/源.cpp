#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "defghijk";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "haha";
//	char arr2[] = "he";
//	strncpy(arr1, arr2,6);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello,world!";
//	char arr2[] = "abcd";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	const char* p1 = "hello,world!";
	const char* p2 = "abcd";
	int ret=strncmp(p1, p2, 2);
	printf("%d\n", ret);
	return 0;
}