#include<stdio.h>
#include<string.h>
#include<termios.h>
#include<fcntl.h>
#include<stdlib.h>

#define ASK "WELCOME TO OUR BANK"
#define TRIES 2
#define SLEEPTIME 5

int execute(char *question,int times);

int main()
{
  int response;
  keep_mode(0);
  ch_tty_mode();
  ch_ndelay();
  response=execute(ASK,TRIES);
  keep_mode(1);
  return response;
}

int execute(char *question,int times)
{
  char *ch;
  ch=malloc(100);
  printf("%s \n"
                 "please enter the password.\n"
              "you have (3) chance to enter it\n",question);
  while(1){
  sleep(SLEEPTIME);
  fgets(ch,100,stdin);
    if(strcmp(ch,"123456")==0){
      printf("OK!I AM HAPPY SERVICE FOR YOU\n");
      return 0;
      }
    else if(times==0)
      return 1;
    else{
      printf("---------------------------\n"
              "Sorry,your password is wrong\n"
                 "or you have not entered any password\n"
                    "you have (%d) chance to try again\n"
               "-----------------------------\a\n",times--);
      }
    }
}

ch_tty_mode()
{
  struct termios tty_mode;
  tcgetattr(0,&tty_mode);
  tty_mode.c_lflag &=~ ECHO;
  tty_mode.c_lflag &=~ ICANON;
  tcsetattr(0,TCSANOW,&tty_mode);
}

ch_ndelay()
{
  int re_flag;
  re_flag=fcntl(0,F_GETFL);
  re_flag |= O_NONBLOCK;
  fcntl(0,F_SETFL,re_flag);
}
  
keep_mode(int num) 
{
  static struct termios keep_tty_mode;
  static int keep_file_mode;
  if(num==0){
    tcgetattr(0,&keep_tty_mode);
    keep_file_mode=fcntl(0,F_GETFL);
    }
  else{
    tcsetattr(0,TCSANOW,&keep_tty_mode);
    fcntl(0,F_SETFL,keep_file_mode);
    }
}

