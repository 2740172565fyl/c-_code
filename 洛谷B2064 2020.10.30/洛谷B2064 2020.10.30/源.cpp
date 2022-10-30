#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int x, i, y;
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        scanf("%d", &y);
        int j, x1 = 1, x2 = 1, num = 1;
        for (j = 3; j <= y; j++)
        {
            num = x1 + x2;
            x2 = x1;
            x1 = num;
        }printf("%d\n", num);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n, x1, x2;
    scanf("%d %d %d", &n, &x1, &x2);
    double x = 1.0 * x2 / x1;
    for (int i = 1; i < n; i++)
    {
        int y1, y2;
        scanf("%d %d", &y1, &y2);
        double y = 1.0 * y2 / y1;
        if (y - x > 0.05)
            printf("better\n");
        else if (x - y > 0.05)
            printf("worse\n");
        else
            printf("same\n");
    }
    return 0;
}