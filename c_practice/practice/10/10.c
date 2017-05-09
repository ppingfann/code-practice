#include<stdio.h>
#define ROWS 3
#define COLS 5
int main()
{
  int array_old[ROWS][COLS] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
  int array_new[ROWS][COLS];

  void show_array(int array[][COLS],int rows);
  void edit_array(int array_old[][COLS],int array_new[][COLS],int rows);
  
  show_array(array_old,ROWS);
  putchar('\n');
  edit_array(array_old,array_new,ROWS);
  show_array(array_new,ROWS);
}

void show_array(int array[][COLS],int rows)
{
  int i,j;
  for(i=0;i<rows;i++){
    for(j=0;j<COLS;j++)
      printf("%3d",array[i][j]);
    putchar('\n');
    }
}

void edit_array(int array_old[][COLS],int array_new[][COLS],int rows)
{
  int i,j;
  for(i=0;i<rows;i++){
    for(j=0;j<COLS;j++)
      array_new[i][j]=array_old[i][j]*2;
    }
}
  


