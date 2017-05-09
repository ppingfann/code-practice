#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
  int fd;
  char buf[BUFSIZ];
  
  if(argc!=2){
    printf("usage like this: write1 devicename\n");
    exit(1);
    }
  else if((fd=open(argv[1],O_WRONLY))==-1){
    perror("open file error: ");
    exit(1);
    }
  else
  while(fgets(buf,BUFSIZ,stdin)!=NULL){
    if(write(fd,buf,strlen(buf))==-1)
    break;
  }
    close(fd);
}
