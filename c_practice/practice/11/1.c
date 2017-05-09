#include<stdio.h>
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
  cp=fgets(ch,n,stdin);
  return (cp);
}
