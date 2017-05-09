#include<stdio.h>
int main()
{
	float tall;
	char name[10];
	scanf("%s %f",name,&tall);
	printf("%s,you are %.2fm tall\n",name,(tall/100));
return 0;
}
