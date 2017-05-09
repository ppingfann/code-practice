#include<stdio.h>

int main()
{
	int i,j;
	char dollar='$';
	for(i=1;i<6;i++)
	 { 
	for(j=0;j<i;j++)
	printf("%c",dollar);
	printf("\n");
	}
	return 0;
}
