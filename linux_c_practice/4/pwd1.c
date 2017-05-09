#include<string.h>
#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>

void pwd_do(char dirname[]);

int main(int ac,char *av[])
{
	if(ac>=1)
	  pwd_do(".");
return 0;
}

void pwd_do(char dirname[])
{	
	struct stat buf;
	struct stat bufff;
	struct dirent *buff;
	DIR *dir_ptr;
	if((stat(dirname,&buf))==-1)
	  perror;
	else
	if((stat("..",&bufff))==-1)
	  perror;
	else	
	if(buf.st_ino==bufff.st_ino)
	{
	printf("\n");
	exit(1);
	}
	else
	if(chdir("..")==-1)	  
	  perror;
	else
	  if((dir_ptr=opendir("."))==NULL)
	perror;
	else	
	  while((buff=readdir(dir_ptr))!=NULL)
	if(buf.st_ino==buff->d_ino)
	  printf("/%s",buff->d_name);
	pwd_do(".");

}
	 
