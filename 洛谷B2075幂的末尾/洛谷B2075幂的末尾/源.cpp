#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = a;
	for (int i = 0; i < b - 1; i++)
	{
		ret *= a;
		ret %= 1000;//如果是4位数这个命令就会生效，取后三位数
	}
	if (ret == 0)printf("000");
	else if (ret < 10)printf("00%d\n", ret);
	else if (ret < 100)printf("0%d\n", ret);
	else printf("%d\n", ret);
	return 0;
}