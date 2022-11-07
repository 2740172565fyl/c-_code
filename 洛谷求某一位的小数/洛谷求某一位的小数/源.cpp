#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a, b, n;
//    scanf("%d %d %d", &a, &b, &n);
//    for (int i = 1; i <= n; i++)
//    {
//        a %= b;
//        a *= 10;
//    }
//    a /= b;
//    printf("%d", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,j,k,count=0;
//	for (i = 1; i <= 4; i++)//百位
//	{
//		for (j = 1; j <= 4; j++)//十位
//		{
//			for (k = 1; k <= 4; k++)//个位
//			{
//				if (i != j && j != k && i != k)
//				{
//					count++;
//					printf("%5d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	printf("总数=%d\n", count);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = -11;
	int b = 5;
	int num = a%b;
	printf("%d", num );
	return 0;
}