#include<stdio.h>
int main(int ac,char *av[])
{
  int num;
  printf("you have entered %d argument\n",ac-1);
  for(num=1;num<ac;num++)
  printf("%d : %s\n",num,av[num]);
}
