#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i, n, x, y, num = 0;
    scanf("%d %d", &n, &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if (y <= n)//如果满足药品需求
        {
            n = n - y;
        }
        else
        {
            num++;
        }
    }
    printf("%d", num);
    return 0;
}