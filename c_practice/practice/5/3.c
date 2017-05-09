#include<stdio.h>

int main()
{
	int days;
	
	printf("please enter the days numbers:\n");
	scanf("%d",&days);
	while(days>0)
	{
	  printf("%d days are %d weeks,%d days\n",days,days/7,days%7);
	  printf("please enter the days numbers:\n");
	  scanf("%d",&days);
	}
return 0;
}
