#include<stdio.h>
#include<string.h>
#define n 11
int main()
{
  char *start(void);
  puts(start());
}

char *start(void)
{
  char *cp;
  static char ch[n];
  int i=0;
  do{
  ch[i]=getchar();
  i++;
  }
  while(i<n && ch[i-1]!=' ' && ch[i-1]!='\t' && ch[i-1]!='\n');
  ch[i-1] = '\0';
  cp = ch;
  return (cp);
}
