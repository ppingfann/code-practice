#include<stdio.h>
#define SIZE 26

int main()
{
	int i;
	char alphabet[SIZE];
	printf("please enter the alphabet\n");
	for(i=0;i<SIZE;i++)
	scanf("%c",&alphabet[i]);
	for(i=0;i<SIZE;i++)
	printf("%c",alphabet[i]);
	printf("\n");
	return 0;
}
