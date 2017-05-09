#include<stdio.h>

#define MIN_PER_HOUR 60

int main()
{
	int min;
	int hour;
	printf("please enter the minutes :\n");
	scanf("%d",&min);
	while(min>0)
	{
	  hour=min/60;
	  min=min%60;
	  printf("the consequence is  %d  hour  %d  minutes\n",hour,min);
	  printf("please enter the minutes :\n");
	  scanf("%d",&min);
	}
	return 0;
}
