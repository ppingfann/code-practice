#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define LEN 10000
#define MODE 0644

void error(char *,char *);

int main(int argc,char *argv[])
{
	int in_fd,out_fd,number;
	char buffer[LEN];
	if(argc!=3)
	 { fprintf(stderr,"usage like this: %s source destination.\n",argv[0]);
	exit(1);
	}
	if((in_fd=open(argv[1],O_RDONLY))==-1)
	  error("Cannot open the sourcefile.\n",argv[1]);
	if((out_fd=creat(argv[2],MODE))==-1)
	  error("Cannot open the destinationfile.\n",argv[2]);
	while((number=read(in_fd,buffer,LEN))>0)
	  if(write(out_fd,buffer,number)!=number)
	  error("failed to write to the destination.\n",argv[2]);
	if(number==-1)
	error("failed to read from the sourcefile.\n",argv[1]);
	if((close(in_fd)==-1) || (close(out_fd))==-1)
	error("failed to close the file","");
	return 0;
}

void error(char *a,char *b)
{
	fprintf(stderr,"error:%s",a);
	perror(b);
exit(1);
}
	
	

	
