#include<stdio.h>
int main()
{
  int i;
  const double source[5] = {1.1,2.2,3.3,4.4,5.5};
  double target1[5];
  double target2[5];
  void copy_arr(const double *source,double *target1,int num);
  void copy_ptr(const double source[],double target2[],int num);
  copy_arr(source,target1,5);
  copy_ptr(source,target2,5);
  printf("target1: ");
  for(i=0;i<5;i++)
    printf("  %lf",target1[i]);
  printf("\n");
  printf("target2: ");
  for(i=0;i<5;i++)
    printf("  %lf",*(target2+i));
  putchar('\n');
  return 0;
}

void copy_arr(const double *source,double *target1,int num)
{
  int i;
  for(i=0;i<num;i++)
    target1[i]=source[i];
}

void copy_ptr(const double *source,double *target2,int num)
{
  int i;
  for(i=0;i<num;i++)
    *(target2+i)=*(source+i);
}

