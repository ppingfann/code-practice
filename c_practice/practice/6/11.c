#include<stdio.h>

int main()
{	
	float i,c=0,num;
	scanf("%f",&num);
	for(i=1.0;i<=num;i++)
	c+=1.0/i;
	printf("%f\n",c);
	return 0;
}
