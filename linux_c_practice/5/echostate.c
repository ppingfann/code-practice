#include<stdio.h>
#include<termios.h>
#include<stdlib.h>

int main()
{
  struct termios info;
  int rv;

  if((rv=tcgetattr(0,&info))==-1){
    perror("termios:");
    exit(1);
    }
  if(info.c_lflag&ECHO)
    printf("ECHO is open\n");
  else
    printf("ECHO is close\n");
}
