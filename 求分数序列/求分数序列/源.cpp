#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n, i, t;
    float p1 = 1, q1 = 2, num = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        num += q1 / p1;     
        t = q1;
        q1 = p1 + t;
        p1 = t;

    }
    printf("%.4lf", num);
    return 0;
}