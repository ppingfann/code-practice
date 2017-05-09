#include<stdio.h>

int main()
{
	int a,b,i;
	int c=0;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d",&a,&b);
	for(;a<b;)
	{
	for(i=a;i<=b;i++)
	c+=i*i;
	printf("The sums of the squares from %d to %d is %d\n",a*a,b*b,c);
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d",&a,&b);
	}
	printf("Done\n");
	return 0;
}
