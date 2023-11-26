#include<stdio.h>
#include<string.h>
int n;
int a[5];
void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}
int main()
{
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    for (int i = 4; i >=1; i--)
    {
        if(n==0)
        {
            a[i] = 3;
            break;
        }
        a[i] = n % 10;
        n = n/10;
        if(a[i]>=7)
        {
            a[i] = a[i] - 7;
        }
        else
        {
            a[i] = a[i] + 3;
        }
    }
    swap(&a[1], &a[3]);
    swap(&a[2], &a[4]); 
    n = 0;
    for (int i = 1; i <=4; i++)
    {
        n *= 10;
        n += a[i];
    }
    printf("%d", n);
    return 0;
}