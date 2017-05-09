#include<stdio.h>

int main()
{	
	char alpha;
	int i,j,k,l;
	printf("please enter a big alphabet:\n");
	scanf("%c",&alpha);
	for(i=1;i<alpha-63;i++)
	{
	for(j=1;j<alpha-63-i;j++)
	printf(" ");
	for(k=1;k<i;k++)
	printf("%c",64+k);
	printf("%c",64+i);
	for(l=1;l<i;l++)
	printf("%c",64+i-l);
	printf("\n");
	}
	return 0;
}	
	
	
	
	
