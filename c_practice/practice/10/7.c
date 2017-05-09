#include<stdio.h>
int main()
{
  int i;
  const double source[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
  double target1[3];
  void copy_arr(const double *source,double *target1,int num);
  copy_arr(source+2,target1,3);
  printf("target1: ");
  for(i=0;i<3;i++)
    printf("  %lf",target1[i]);
  printf("\n");
  return 0;
}

void copy_arr(const double *source,double *target1,int num)
{
  int i;
  for(i=0;i<num;i++)
    target1[i]=source[i];
}

