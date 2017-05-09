#include<stdio.h>
int main()
{
  void copy(double num[][5],int rows,int cols,double target[rows][cols]);
  void show(int rows,int cols,double source[rows][cols]);
  int rows,cols;
  double num[3][5] = {{1.1,2.2,3.3,4.4,5.5},{6.6,7.7,8.8,9.9,10.1},{11.11,12.12,13.13,14.14,15.15}};
  double target[rows][cols];
  show(3,5,num);
  copy(num,3,5,target);
  show(3,5,target);
  return 0;
}
  
void copy(double num[][5],int rows,int cols,double target[rows][cols])
{
  int i,j;
  for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
      target[i][j] = num[i][j];
}

void show(int rows,int cols,double source[rows][cols])
{
  int i,j;
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++)
      printf("%.2lf ",source[i][j]);
      putchar('\n');
  }
    
}


  
