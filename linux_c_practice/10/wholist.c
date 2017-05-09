#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main(int ac,char *av[])
{
  if(close(1) == -1){
    perror("close wrong!");
    exit(1);
    }
  if(creat("userlist",0644) == -1){
    perror("userlist creat failed");
    exit(1);
    }
  execlp(av[1],av[1],NULL);
  return 0;
}
  
