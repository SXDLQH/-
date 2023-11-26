#include<stdio.h>
int main()
{
	int f;
	scanf("%d",&f);
	if(f%100==0)
	{
		if(f%400==0)
		{
			printf("Yes");
		}
		else
		printf("No");
	}
	else
	{
		if(f%4==0)
		printf("Yes");
		else
		printf("No"); 
	 } 
	 getchar();
	 getchar();
	 return 0;
}
