#include<stdio.h>
#include<dirent.h>
#include<string.h>

void ls_do(char dirname[]);
void ch_dir(char dir_name[]);

DIR *dir_ptr;
struct dirent *buff;
char store[100][256];
int i=0,all;

int main(int ac,char *av[])
{
	if(ac==1)
	  {
	  printf(".:\n");
	  ls_do(".");
	  }
	else
	if(--ac)
	  {
	  printf("%s:\n",*++av);
	  ls_do(*av);
	  }
return 0;
}

void ls_do(char dirname[])
{
	if((dir_ptr=opendir(dirname))==NULL)
	  perror;
	else	
	  while((buff=readdir(dir_ptr))!=NULL)
	    if(buff->d_name[0]!='.')
	  {
	  printf("%s  ",buff->d_name);
	  strcpy(store[i],buff->d_name);
	  all=++i;
	  }
 	
	  printf("\n\n");
	
	for(i=0;i<all;i++)
	  ch_dir(store[i]);
		
	closedir(dir_ptr);
}

void ch_dir(char dir_name[])
{
	if(chdir(dir_name)!=-1)
	  ls_do(".");
}
