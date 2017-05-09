#include<stdio.h>
#define MAXNUM 4
int main()
{
  int i;
  int array_1[4] = {2,4,5,8};
  int array_2[4] = {1,0,4,6};
  int array_3[4];
  void add(int *array_1,int *array_2,int *array_3,int num);
  add(array_1,array_2,array_3,MAXNUM);
  for(i=0;i<MAXNUM;i++)
    printf("%d ",array_3[i]);
  putchar('\n');
}

void add(int *array_1,int *array_2,int *array_3,int num)
{
  int i;
  for(i=0;i<num;i++)
    array_3[i]=array_1[i]+array_2[i];
}
