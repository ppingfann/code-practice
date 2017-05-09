#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
  int todc[2],fromdc[2];

  if(pipe(todc) == -1){
     perror("pipe");
     exit(1);
    }pipe(fromdc);
  printf("%d,,%d\n",todc[0],todc[1]);
  printf("%d,,%d\n",fromdc[0],fromdc[1]);
  printf("%d\n",BUFSIZ);
}
  
