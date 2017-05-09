#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 20

int main()
{
  int num=0;
  char str[MAX];
  char *cp;
  cp=str;
  if(fgets(cp,MAX,stdin))
    cp[strlen(cp)-1]='\0';
  while(*cp!='\0'){
  if(ispunct(*cp++))
    num++;
    }
  printf("%d\n",num);
}
