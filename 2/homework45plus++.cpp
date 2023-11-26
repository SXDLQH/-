#include<stdio.h>
double x;
double n=1.0,e=1.0,m=1.0;
int main()
{
    scanf("%lf", &x);
    double k = x;
    e = e + x;
    for (double i = 2.0; i <= 10.0;i++)
    {
        m = m * i;
        x = x * k;
        e += x / m;
    }
    printf("%.6lf", e);
    return 0;
}