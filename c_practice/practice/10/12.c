#include<stdio.h>
#define ROWS 3
#define COLS 5
int main()
{
  double array[ROWS][COLS];
  void input(double array[][COLS],int rows);
  void average_rows(double array[][COLS],int rows);
  double average_all(double array[][COLS],int rows);
  double find_max(double array[][COLS],int rows);
  void show_array(double array[][COLS],int rows);
  input(array,ROWS);
  show_array(array,ROWS);
  average_rows(array,ROWS);
  printf("the average_all is :%.1lf\n",average_all(array,ROWS));
  printf("the max of array is :%.1lf\n",find_max(array,ROWS));
}

void input(double array[][COLS],int rows)
{
  int i,j;
  for(i=0;i<rows;i++){
    printf("enter the rows %d :\n",i+1);
    for(j=0;j<COLS;j++)
      scanf("%lf",&array[i][j]);
    }
}

void average_rows(double array[][COLS],int rows)
{
  int i,j;
  double total;
  for(i=0;i<rows;i++){
    for(j=0;j<COLS;j++)
      total+=array[i][j];
    printf("the average_rows[%d] is :%lf\n",i,total/COLS);
    total=0;
    }
}

double average_all(double array[][COLS],int rows)
{
  int i,j;
  double total;
  for(i=0;i<rows;i++)
    for(j=0;j<COLS;j++)
      total+=array[i][j];
  return total/(COLS*rows);
}

double find_max(double array[][COLS],int rows)
{
  int i,j;
  double max = array[0][0];
  for(i=0;i<rows;i++)
    for(j=0;j<COLS;j++)
      if(array[i][j]>max)
        max=array[i][j];
  return max;
}

void show_array(double array[][COLS],int rows)
{
  int i,j;
  for(i=0;i<rows;i++){
    for(j=0;j<COLS;j++)
      printf("%.1f  ",array[i][j]);
      putchar('\n');
    }
}
