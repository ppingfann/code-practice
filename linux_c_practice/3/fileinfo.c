#include<stdio.h>
#include<sys/stat.h>

void show_statinfo(char *filename,struct stat *buf);

int main(int ac,char *av[])
{
	struct stat buffer;
	if(ac>1)
	 if(stat(av[1],&buffer)==0){
	    show_statinfo(av[1],&buffer);
	    return 0;
	     }
	else 
	  perror(av[1]);
	return 1;
}

void show_statinfo(char *filename,struct stat *buf)
{
	printf("    mode:%o\n",buf->st_mode);
	printf("   nlink:%d\n",buf->st_nlink);
	printf("    uid:%d\n",buf->st_uid);
	printf("    gid:%d\n",buf->st_gid);
	printf("    size:%d\n",buf->st_size);
	printf("   mtime:%d\n",buf->st_mtime);
	printf("   name:%s\n",filename);     
}
	
