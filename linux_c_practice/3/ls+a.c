#include<stdio.h>
#include<dirent.h>

void ls_do(char dirname[]);
void ls_doo(char dname[]);
struct dirent *buf;

int main(int ac,char *av[])
{
	if(ac==1)
	  ls_do(".");
	else
	if(av[1][0]!='-'||av[1][1]!='a')
	  while(--ac){
	ls_do(*++av);
	}
	else
	if(ac==2)
	  ls_doo(".") ;
	else
	{
	--ac;
	++av;
	while(--ac){
	ls_doo(*++av);
	}
	}
return 0;
}

void ls_do(char dirname[])
{
	DIR *dir;	
	if((dir=opendir(dirname))==NULL)
	perror(dirname);
	else
	while((buf=readdir(dir))!=NULL)
	  if(buf->d_name[0]!='.')
	  printf("%s  ",buf->d_name);
	  printf("\n");
	closedir(dir);
}

void ls_doo(char dname[])
{
	DIR *dir;	
	if((dir=opendir(dname))==NULL)
	perror(dname);
	else
	while((buf=readdir(dir))!=NULL)
	  printf("%s  ",buf->d_name);
	  printf("\n");
	closedir(dir);
}
