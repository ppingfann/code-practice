#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main()
{
  char *cp;
  char ch;
  cp=malloc(MAX);
  int is_within(char ch,char *cp);
  while(1){
    ch=getchar();
    while(getchar()!='\n')
    continue;
    fgets(cp,MAX,stdin);
    cp[strlen(cp)-1]='\0';
  if(is_within(ch,cp))
    puts("WITHIN");
  else
    puts("NOT WITHIN");
    }
}

int is_within(char ch,char *cp)
{
  if(strchr(cp,ch))
    return 1;
  else
    return 0;
}
    
  
