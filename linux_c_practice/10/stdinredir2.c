#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
  char line[100];
  int fd,newfd;
  
  fgets(line,100,stdin);printf("%s",line);
  fgets(line,100,stdin);printf("%s",line);
  fgets(line,100,stdin);printf("%s",line);

  fd = open("/etc/passwd",O_RDONLY);
  
  newfd = dup2(fd,0);
  if(newfd != 0){
    fprintf(stderr,"can not duplicate to 0!\n");
    exit(1);
    }
  close(fd);
  fgets(line,100,stdin);printf("%s",line);
  fgets(line,100,stdin);printf("%s",line);
  fgets(line,100,stdin);printf("%s",line);
  return 0;
}
  
