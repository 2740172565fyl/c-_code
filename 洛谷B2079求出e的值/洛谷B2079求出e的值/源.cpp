#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int i, n = 15;
//    int sum = 1, e = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)       //我写的
//        {
//            sum = sum * i;//阶乘
//            e += 1 / sum;
//        }
//    }
//    printf("%.10d\n", e);
//    return 0;
//}

#include<stdio.h>
int main()
{
    double num = 1, sum = 1;
    long long b = 1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)    //正确答案
    {
        b *= i;
        num = 1.0 / b;
        sum += num;
    }
    printf("%.10lf\n", sum);
    return 0;
}