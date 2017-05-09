#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>

int main()

{
	struct dirent *buff;
	FILE *ptr;
	ptr=fopen("userlist","r");
	
	printf("%d\n",ptr);
}
