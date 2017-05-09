#include<stdio.h>
#define MAX 10
#include<string.h>

int main()
{
  char *start();
  puts(start());
}
  
char *start()
{
  int i;
  static char *cp;
  static char ch[MAX];
  fgets(ch,MAX,stdin);
  for(i=0;i<MAX;i++)
    if(ch[i]==' ' || ch[i]=='\t' || ch[i]=='\n')
  ch[i]='\0';
  cp = ch;
  return cp;
}
