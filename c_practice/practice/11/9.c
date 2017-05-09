#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100

int main()
{
  void func(char *cp);
  char ch[MAX];
  while(1){
  printf("please enter a string to kill the space(enter the space to quit)\n");
  fgets(ch,MAX,stdin);
  ch[strlen(ch)-1] = '\0';
  if(strcmp(ch," ")!=0)
    func(ch);
  else
    exit(1);
  }
}

void func(char *cp)
{
  int i;
  for(i=0;i<strlen(cp);i++){
  if(cp[i]==' ')
    ;
  else
    putchar(cp[i]);
  }
  putchar('\n');
}
  
  
