#include<stdio.h>

int main()
{
  double m,n;
  void larger_of(double *,double *);
  printf("please enter the m :\n");
  scanf("%lf",&m);
  printf("please enter the n :\n");
  scanf("%lf",&n);
  printf("original : m = %lf,n = %lf",m,n);
  larger_of(&m,&n);
  printf("now : m = %lf,n = %lf",m,n);
}

void larger_of(double *x,double *y)
{
  if(*x > *y)
    *y = *x;
  else
    *x = *y;
}
