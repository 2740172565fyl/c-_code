#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int i, n;
//    double sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//            sum += -1.0 / i;
//        else
//            sum += 1.0 / i;
//    }
//    printf("%.4lf", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a, b, c;
    int x=2;
    scanf("%d %d %d", &a, &b, &c);
    while (x>1)
    {
        if (a%x == b%x && b%x  == c%x)
        {
            printf("%d", x);
            break;
        }
            x++;
    }
    return 0;
}