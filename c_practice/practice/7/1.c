#include<stdio.h>
int main()
{
	int count_s=0,count_e=0,count_o=0;
	char ch;
	while((ch=getchar())!='#')
	{
	if(ch==' ')
	count_s++;
	else if(ch=='\n')
	count_e++;
	else
	count_o++;
	}
	printf("space:%d,enter:%d,other:%d\n",count_s,count_e,count_o);
	return 0;
}
