#include<stdio.h>
int n,m=1,i;
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
    {
        m = m * i;
    }
    printf("%d\n", m);
    return 0;
}