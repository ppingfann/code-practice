#include<stdio.h>

int main()
{
	int i,a,b;
	printf("the minimum is :");
	scanf("%d",&a);
	printf("the maximum is :");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	printf("%7d  %7d  %7d\n",i,i*i,i*i*i);
	return 0;
}
