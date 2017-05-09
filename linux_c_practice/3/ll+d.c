#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>

struct stat buf;

void ll_do(char dirname[]);
void chtime(long timeval);

int main(int ac,char *av[])
{
	if(ac==1)
	  ll_do(".");
	else
	while(--ac)
	  ll_do(*++av);
return 0;
}	

void ll_do(char dirname[])
{
	if(stat(dirname,&buf)==-1)
	  perror(dirname);
	else
	  printf("%o  ",buf.st_mode);
	  printf("%d  ",buf.st_nlink);
	  printf("%d  ",buf.st_uid);
	  printf("%d  ",buf.st_gid);
	  printf("%d  ",buf.st_size);
	  chtime(buf.st_mtime);
	  printf("%s\n",dirname);

}
	
void chtime(long timeval)
{
	char *cp;
	cp=ctime(&timeval);
	printf("%.24s  ",cp);
}
