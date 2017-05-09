#include<stdio.h>
	
int main()
{
	char ch;
	int count=0;
	while((ch=getchar())!='#')
	{
	if(ch=='.')
	{
	ch='!';
	count++;
	}
	else
	if(ch=='!')
	{
	ch='!';
	count++;
	printf("!");
	}
	printf("%c",ch);
	}
	printf("\n");
	printf("%d\n",count);
	return 0;
}
