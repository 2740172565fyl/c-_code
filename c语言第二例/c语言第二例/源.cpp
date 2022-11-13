#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    double i;
    double a, b, c, d,e,num;
    scanf("%lf", &i);
    a = 100000 * 0.1;
    b = a + 100000 * 0.075;
    c = b + 200000 * 0.05;
    d = c + 200000 * 0.03;
    e = d + 400000 * 0.015;
    if (i < 100000)
        num = i * 0.1;
    else if (i <= 200000)
        num = a + (i - 100000) * 0.075;
    else if (i <= 400000)
        num = b + (i - 20000) * 0.05;
    else if (i <= 60000)
        num = c + (i - 40000) * 0.03;
    else if (i <= 100000)
        num = d + (i - 60000) * 0.015;
    else if (i > 100000)
        num = e + (i - 100000) * 0.01;
    printf("%lf", num);
        return 0;
}