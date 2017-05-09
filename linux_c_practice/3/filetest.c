#include<stdio.h>
#include<sys/stat.h>

int main()
{
	struct stat infobuf;
	if(stat("/etc/shadow",&infobuf)==-1)
	  perror("/etc/shadow");
	else 
	  printf("the size of file is %d\n",infobuf.st_atime);
return 0;
}
	
