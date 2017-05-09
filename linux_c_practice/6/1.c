#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ASK "WELCOME TO OUR BANK"
#define TRIES 2

int execute(char *question,int times);

int main()
{
  int response;
  response=execute(ASK,TRIES);
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
  fgets(ch,100,stdin);
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

