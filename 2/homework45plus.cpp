#include<stdio.h>
double e = 1.0;
double n = 1.0;
int i = 1;
int main()
{
    while(i<=1000)
    {
        n =(double) n * i;
        e = e + 1.0 / n;
        i++;
    }
    printf("%.13lf\n", e);
    return 0;
}