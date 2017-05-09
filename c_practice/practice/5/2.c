#include<stdio.h>

int main()
{
	int num;
	int i=0;
	printf("please enter a number :\n");
	scanf("%d",&num);
	while(i<11)
	{
	  printf("%d  ",num++);
	  i++;
	}
	printf("\n");
return 0;
}
