#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n, i, geshu,num=0;
//    double average_value;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &geshu);
//        num += geshu;//求和
//        average_value = 1.0*num / n;//均值
//    }
//    printf("%d %.5lf", num, average_value);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, number, max = 0, sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &number);
//        if (max >= number)
//        {
//            continue;
//        }
//        else
//        {
//            max = number;
//        }
//    }
//    printf("%d ", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i = 1, number, max = 0;
//    scanf("%d", &n);
//    while (i <= n)
//    {
//        scanf("%d", &number);
//        if (max >= number)
//        {
//            max = max;
//        }
//        else
//        {
//            max = number;
//        }
//        i++;
//    }
//    printf("%d", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, number;
//    int a1, b1 = 0, a2, b2 = 0, a3, b3 = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %d %d", &a1, &a2, &a3);
//        b1 += a1;
//        b2 += a2;
//        b3 += a3;
//    }
//    printf("%d %d %d %d", b1, b2, b3, b1 + b2 + b3);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, n, num = 0;
//    scanf("%d %d", &i, &n);
//    for (; i <= n; i++)
//    {
//        if (i % 2 != 0)
//        {
//            num += i;
//        }
//    }
//    printf("%d", num);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int k, i, number = 0;
//    int num = 0, sum = 0, hum = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++)
//    {
//        scanf("%d", &number);
//        if (number == 1)
//            num++;
//        else if (number == 5)
//            sum++;
//        else if (number == 10)
//            hum++;
//    }
//    printf("%d\n%d\n%d\n", num,sum,hum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, n, power = 1, i;
//    scanf("%d %d", &a, &n);
//    for (i = 1; i <= n; i++)
//        power *= a; // 相当于power=power*a
//    printf("%d", power);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int x, n, i;
    double s;
    scanf("%d %d", &x, &n);
    s = x;
    for (i = 0; i < n; i++)
    {
        s = s * (1 + 0.001);
    }
    printf("%.4lf", s);
    return 0;
}