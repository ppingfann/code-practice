#include<grp.h>
#include<pwd.h>
#include<time.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>


void ll_do(char filename[]);
void show_username(uid_t uid);
void ls_do(char dirname[]);
void show_time(long);
void show_groupname(int gid);
void show_mode(int mode);

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
	show_mode(buf.st_mode);
	printf("%d  ",buf.st_nlink);
	show_username(buf.st_uid);
	show_groupname(buf.st_gid);
	printf("%d  ",buf.st_size);
	show_time(buf.st_mtime);
	printf("%s\n",filename);
	}
}

void show_time(long timeval)
{
	char *cp;
	cp=ctime(&timeval);
	printf("%12.12s  ",cp+4);
}	
	
void show_mode(int mode)
{
	char str[10];
	strcpy(str,"----------");
	
	if(S_ISDIR(mode)) str[0]='d';
	if(S_ISCHR(mode)) str[0]='c';
	if(S_ISBLK(mode)) str[0]='b';

	if(mode & S_IRUSR) str[1]='r';
	if(mode & S_IWUSR) str[2]='w';
	if(mode & S_IXUSR) str[3]='x';

	if(mode & S_IRGRP) str[4]='r';
	if(mode & S_IWGRP) str[5]='w';
	if(mode & S_IXGRP) str[6]='x';

	if(mode & S_IROTH) str[7]='r';
	if(mode & S_IWOTH) str[8]='w';
	if(mode & S_IXOTH) str[9]='x';
	printf("%s  ",str);
}

void show_username(uid_t uid)
{
	struct passwd *buf;
	buf=getpwuid(uid);	
	printf("%s  ",buf->pw_name);
}
	
void show_groupname(int  gid)
{
	struct group *buf;
	buf=getgrgid(gid);
	printf("%s  ",buf->gr_name);
}
