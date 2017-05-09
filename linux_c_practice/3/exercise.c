#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>


void ll_do(char filename[]);
void ls_do(char dirname[]);

int main(int ac,char *av[])
{
	if(ac==1)
	  ls_do(".");
	else{
	  while(--ac)
	  ls_do(*++av);
	}
return 0;
}

void ls_do(char dirname[])
{
	DIR *dir_ptr;
	struct dirent *buf;
	if((dir_ptr=(opendir(dirname)))==NULL)
	  perror(dirname);
	else	
	  while((buf=(readdir(dir_ptr)))!=NULL)
	    ll_do(buf->d_name);
	closedir(dir_ptr);
}

 void ll_do(char filename[])
{
	struct stat buf;
	if(stat(filename,&buf)==-1)
	perror(filename);
	else	
	{
	  printf("%o  ",buf.st_mode);
	  printf("%d  ",buf.st_nlink);
	  printf("%d  ",buf.st_uid);
	  printf("%d  ",buf.st_gid);
	  printf("%d  ",buf.st_size);
	  printf("%d  ",buf.st_mtime);
	  printf("%s\n",filename);

	}
}
