#include<string.h>
#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>

void pwd_do(char dirname[]);

	int all;
	int i=0;
	struct stat buff_1;
	struct stat buff_3;
	char store[100][256];
	struct dirent *buff_2;
	DIR *dir_ptr;

int main(int ac,char *av[])
{
	if(ac>=1)
	  pwd_do(".");
return 0;
}

void pwd_do(char dirname[])
{	
	if((stat(dirname,&buff_1))==-1)
	  perror;
	else
	if((stat("..",&buff_3))==-1)
	  perror;
	else	
	if(buff_1.st_ino==buff_3.st_ino)
	{
	for(i=all;i>=0;i--)
	printf("/%s",store[i]);
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
	  while((buff_2=readdir(dir_ptr))!=NULL)
	if(buff_1.st_ino==buff_2->d_ino)
	  {
	strcpy(store[i],buff_2->d_name);
	  all=i++;
	}
	pwd_do(".");

}
	 
