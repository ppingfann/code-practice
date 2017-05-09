#include<stdio.h>
int main()
{
	char name[10];
	int num;
	scanf("%s",name);
	num=printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("%*s\n",num+1,name);
	return 0;
}
