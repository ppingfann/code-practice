#include<stdio.h>
int main(int ac,char *av[])
{
  int i;
  
  for(i=0;i<ac;i++)
    printf("arg[%d] : %s\n",i,av[i]);
  fprintf(stderr,"this is a wrong message!!!\n");
}
