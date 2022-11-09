#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long int m;
	int n, k, num = 0;
	scanf("%ld %d", &m, &k);

	for (int i = 1; i <= 15; i++)
	{
		if (i == 1)
		{
			n = m % 10;
			if (n == 3)
				num++;
		}
		if (i > 1)
		{
			n = (m / 10) % 10;
			if (n == 3)
				num++;
			m = m / 10;
		}
		if (m < 10)
			break;
	}
	if (num == k)
		printf("YES");
	else
		printf("NO");
	return 0;
}