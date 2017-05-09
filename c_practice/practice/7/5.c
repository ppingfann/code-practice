#include<stdio.h>

int main()
{
	int num;
	int count_o=0,count_a=0;
	int even=0,odd=0;
	while(scanf("%d",&num) && num!=0)
	{
	switch(num%2)
	{
	case 0:
	
	count_o++;
	even+=num;
	
	continue;
	case 1:
	
	count_a++;
	odd+=num;
	}
	}
	printf("%d,%.1f,%d,%.1f\n",count_o,(float)even/count_o,count_a,(float)odd/count_a);
	
return 0;
}
