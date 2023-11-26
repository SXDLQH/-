#include<stdio.h>
int main()
{
	int f;
	scanf("%d",&f);
	f%100==0?(f%400==0?printf("Yes\n"):printf("No\n")):(f%4==0?printf("Yes\n"):printf("No\n"));
	puts(f%100==0?(f%400==0?"Yes":"No"):(f%4==0?"Yes":"No"));
	getchar();
	getchar();
	 return 0;
}
