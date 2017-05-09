#include<stdio.h>
#define MAXNUM 5
int main()
{
  double num[]={1.1,2.2,5.5,4.4,3.3};
  int findmax(double num[],int maxnum);
  printf("the order of double number is:\n");
  printf("%d\n",findmax(num,MAXNUM));
  return 0;
}

int findmax(double num[],int maxnum)
{
  int i,j;
  double max = num[0];
  for(i=1;i<MAXNUM;i++){
    if(max<num[i]){
      max=num[i];
      j=i+1;
    }
    }
  return j;
}
  
