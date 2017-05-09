#include<stdio.h>

int main()
{
	char a[8];
	int i;
	printf("please enter 8 characters: \n");
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	printf("the convert numbers is:\n");
	for(i=7;i>=0;i--)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}
	
