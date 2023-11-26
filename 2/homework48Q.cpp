#include<stdio.h>
#include<bits/stdc++.h>
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
    scanf("%d",& n);
    memset(a, 0, sizeof(a));
    for (int i = 4; i >= 1;i--)
    {
        a[i] = ((n % 10) + 7) % 10;
        n = n / 10;
    }
    swap(&a[1], &a[3]);
    swap(&a[2], &a[4]);
    n = 0;
    for (int i = 1; i <= 4;i++)
    {
        n = n * 10;
        n += a[i];
    }
    printf("%d", n);
    return 0;
}