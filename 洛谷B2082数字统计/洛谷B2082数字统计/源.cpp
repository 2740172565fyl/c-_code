#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int count=0;
    int n, k,i;
    scanf("%d %d", &n, &k);
    for (i = n; i <= k; i++)
    {
        int j=i;
        while(j>0)
        {
            if (j % 10 == 2)
            {
                count++;
            }
            j = j / 10;
        }
    }
    printf("%d\n", count);
    return 0;
}