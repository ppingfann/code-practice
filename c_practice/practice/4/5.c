#include<stdio.h>
int main()
{
	char name[10],first_name[10];
	int name_num,first_name_num;
	scanf("%s %s",name,first_name);
	name_num=printf("%s ",name);
	first_name_num=printf("%s\n",first_name);
	printf("%*d %*d\n",name_num-1,name_num-1,first_name_num-1,first_name_num-1);
	name_num=printf("%s ",name);
	first_name_num=printf("%s\n",first_name);
	printf("%-*d %-*d\n",name_num-1,name_num-1,first_name_num-1,first_name_num-1);
return 0;
}
