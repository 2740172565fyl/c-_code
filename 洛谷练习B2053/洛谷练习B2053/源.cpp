#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a, b, c, d, x1, x2;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    d = b * b - 4 * a * c;
//    if (d < 0)
//        printf("No answer!");
//    else if (d == 0)
//        printf("x1=x2=%.5lf", -b / (2 * a));
//    else
//    {
//        x1 = (-b - sqrt(d)) / (2 * a);
//        x2 = (-b + sqrt(d)) / (2 * a);
//        if (x1 < x2)
//            printf("x1=%.5lf;x2=%.5lf", x1, x2);
//        else
//            printf("x1=%.5lf;x2=%.5lf", x2, x1);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n,x,y=0;
//	float average_value=0;//n表示人数，y表示要输入的个数
//	scanf("%d", &n);
//	for (x = 1; x < n; x++)
//	{
//		scanf("%d", &y);
//		average_value += y;
//	}
//	printf("%.2f", average_value /= x);
//	return 0;
//}
#include<stdio.h>
int main()
{
    int n, x;
    double a = 0;//代表各个样本个数
    double average_value = 0;
    scanf("%d", &n);
    for (x = 0; x < n; x++)
    {
        scanf("%lf", &a);
        average_value += a;
    }
    printf("%.4lf", average_value = average_value / n);
    return 0;
}