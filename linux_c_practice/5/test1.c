#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int fd;
  char *buf;
  buf=malloc(1000);
  fgets(buf,1000,stdin);
  write(1,buf,strlen(buf));
  close(fd);
}

