#include<stdio.h>
int main()
{
  int i,j;
  void copy(double *num,double *target,int n);
  double num[2][3]={{1.1,2.2,3.3},{4.4,5.5,6.6}};
  double target[2][3];
  copy(num[0],target[0],3);
  copy(num[1],target[1],3);
  for(i=0;i<2;i++){
    for(j=0;j<3;j++)
      printf("%lf ",target[i][j]);
    putchar('\n');
  }
}

void copy(double *num,double *target,int n)
{
  int i;
  for(i=0;i<n;i++)
    target[i]=num[i];
}
  
  
  
