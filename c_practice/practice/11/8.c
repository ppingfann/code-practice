#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
int main()
{
  void fun(char *cp);
  char cp[MAX];
  while(1){
  printf("please enter the character to convert (enter the \"quit\" to quit)\n");
  fgets(cp,MAX,stdin);
  cp[strlen(cp)-1]='\0';
  if(strcmp(cp,"quit")!=0)
  fun(cp);
  else
  exit(1);
  }
  
}

void fun(char *cp)
{
  int i;
  for(i=(strlen(cp)-1);i>=0;i--)
  {
    putchar(cp[i]);
  }
  putchar('\n');
}
