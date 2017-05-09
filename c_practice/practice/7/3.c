#include<stdio.h>

int main()
{
	int count_o=0,count_e=0;
	int odd=0,even=0;
	int even_average,odd_average;
	int num;
	while(scanf("%d",&num) && num!=0)
	{
	if(num%2==0)
	{	
	count_e++;
	even+=num;
	}
	else
	{
	count_o++;
	odd+=num;
	}
	}
	even_average=even/count_e;
	odd_average=odd/count_o;
	printf("the even number have %d ,and the average is %d,the odd number have %d,and the average is %d\n",count_e,even_average,count_o,odd_average);
	return 0;
}

	
