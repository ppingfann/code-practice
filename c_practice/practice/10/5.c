#include<stdio.h>
#define MAXNUM 5
int main()
{
  double num[]={1.1,2.2,5.5,3.3,4.4};
  double sub_max_min(double *num,int maxnum);
  printf("the max subtract the min of num is :\n%lf\n",sub_max_min(num,MAXNUM));
  return 0;
}

double sub_max_min(double *num,int maxnum)
{
  double max = num[0];
  double min = num[0];
  double sub;
  int i;
  for(i=1;i<MAXNUM;i++){
    if(max<num[i])
      max=num[i];
    if(min>num[i])
      min=num[i];
    }
  sub=max-min;
  return sub;
}
