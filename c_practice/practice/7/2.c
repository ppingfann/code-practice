#include<stdio.h>

int main()
{
	int count=0;
	char ch;
	while((ch=getchar())!='#')
	{
	printf("%c%d",ch,ch);
	count++;
	if(count%8==0)
	printf("\n");
	}
	return 0;
}
