#include<stdio.h>
#define JUST_CHECKING
#define LIMIT 4

int main()
{
	int i;
	int total=0;
	
	for(i=1;i<LIMIT;i++)
	{
		total+=2*i*i+1;
	printf("i=%d,running tolal =%d\n",i,total);
	}
	printf("Grand total=%d\n",total);
	return 0;
}
