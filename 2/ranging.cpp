#include<stdio.h>
#include <stdlib.h>
int main()
{
	int x=10;
	int y=20;
	int z=30;
	printf("the max value is %d\n",x<y?x:y);
	int temp=x>y?x:y;
	printf("%d\n",temp);
	x>y?printf("%d\n",x):printf("%d\n",y);
	printf("%d\n",x>y?(x>z?x:z):(y>z?y:z));
	printf("你好");
	getchar();
	return 0;
}
