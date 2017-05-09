#include<stdio.h>

int main()
{
  double x,y;
  double average_xie(double m,double n);
  printf("please enter the x :\n");
  scanf("%lf",&x);
  printf("please enter the y :\n");
  scanf("%lf",&y);
  printf("the consequence is %lf\n",average_xie(x,y));
}

double average_xie(double m,double n)
{
  return(2/(1/m+1/n));
}
