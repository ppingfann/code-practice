#include<stdio.h>
#define MAXNUM 5
int main()
{
  const int num[MAXNUM]={1,2,5,4,3};
  int findmax(const int *num);
  printf("MAX= %d\n",findmax(num));
  return 0;
}

int findmax(const int *num)
{
  int max=num[0];
  int i;
  for(i=1;i<MAXNUM;i++){
  if(max<num[i])
    max=num[i];
  }
  return max;
}
  
  
