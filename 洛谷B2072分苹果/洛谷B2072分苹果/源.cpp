#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
    int n, num = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        num += i;
    }
    printf("%d", num);
    return 0;
}