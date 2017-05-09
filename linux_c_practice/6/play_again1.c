#include<stdio.h>
#include<termios.h>

#define QUESTION "Do you want another transaction"

int execute(char *question);

int main()
{
  int response;
  keep_mode(0);
  change_mode();
  response=execute(QUESTION);
  keep_mode(1);
  printf("\n");
  return response;
}

keep_mode(int num)
{
  static struct termios original;
  if(num==0)
    tcgetattr(0,&original);
  else
    tcsetattr(0,TCSANOW,&original);
}

change_mode()
{
  struct termios buff;
  tcgetattr(0,&buff);
  buff.c_lflag &=~ ICANON;
  buff.c_cc[VMIN] =1;
  buff.c_lflag &=~ ECHO;
  tcsetattr(0,TCSANOW,&buff);
}

int execute(char *question)
{
  char ch;
  printf("%s[y/n]?",question);
  while(1)
  {
    switch(ch=getchar()){
    case 'y':
    case 'Y': return 0;
    case 'n':
    case 'N': 
    case EOF: return 1;
    }
  }
}

