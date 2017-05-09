#include<stdio.h>
 
int main()
{
  int x=5;
  int y=10;
  void interchange(int *,int *);
  printf("the x= %d,y= %d \n",x,y);
  interchange(&x,&y);
  printf("now the x= %d,y= %d\n",x,y);
}

void interchange(int *u,int *v)
{
  int *temp;
  temp = u;
  u = v;
  v = temp;
}
