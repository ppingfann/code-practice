#include<stdio.h>

double main()
{
  double m,n;
  double min(double x,double y);
  printf("please enter the numbers:\n");
  scanf("%lf %lf",&m,&n);
  printf("the minimum of them is :%f\n",min(m,n));
}

double min(double x,double y)
{
  if(x<y)
  return x;
  else
  return y;
}
