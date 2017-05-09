#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(int ac,char *av[])
{
  int apipe[2],pid;

  close(0);
  close(1);
  if(pipe(apipe) == -1){
    perror("pipe wrong!");
    exit(1);
    }
  pid = fork();
  if(pid == -1){
    perror("fork wrong!");
    exit(1);
    }
  else if(pid == 0){
    execlp(av[1],av[1],NULL);
    perror("execlp wrong!");
    exit(1);
    }
  else{
    close(1);
    open("/dev/tty1",O_WRONLY);
    execlp(av[2],av[2],NULL);
    perror("execlp wrong!");
    exit(1);
    }
}
