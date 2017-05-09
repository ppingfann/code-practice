#include<stdio.h>
#include<string.h>
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
  fgets(ch,8,stdin);
    ch[strlen(ch)-1]='\0';
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

ch_ndelay()
{
  int re_flag;
  re_flag=fcntl(0,F_GETFL);
  re_flag |= O_NONBLOCK;
  fcntl(0,F_SETFL,re_flag);
}
  
keep_mode(int num) 
{
  static int keep_file_mode;
  if(num==0)
    keep_file_mode=fcntl(0,F_GETFL);
  else
    fcntl(0,F_SETFL,keep_file_mode);
}

