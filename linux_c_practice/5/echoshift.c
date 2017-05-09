#include<stdio.h>
#include<termios.h>
#include<stdlib.h>

int main()
{
  struct termios info; 
  if(tcgetattr(0,&info)==-1){
    perror("tcgetattr");
    exit(1);
    }
  else{
    if(info.c_lflag&ECHO)
      info.c_lflag&=~ECHO;
    else
      info.c_lflag|=ECHO;
    if(tcsetattr(0,TCSANOW,&info)==-1)
      perror("tcsetattr");
    }
  
}
