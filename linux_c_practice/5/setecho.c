#include<stdio.h>
#include<termios.h>
#include<stdlib.h>

#define oops(s,x) {perror(s);exit(x);}

int main(int argc,char *argv[])
{
  struct termios info;
  int rv;
  if(argc==1)
    oops("error",0);
  if((rv=(tcgetattr(0,&info)))==-1)
    oops("tcgetattr",1);
  if(argv[1][0]=='y') 
    info.c_lflag|=ECHO;
  else
    info.c_lflag&=~ECHO;
  if(tcsetattr(0,TCSANOW,&info)==-1)
    oops("tcsetattr",2) ;
}
