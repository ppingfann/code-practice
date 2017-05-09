#include<unistd.h>
#include<stdio.h>
#define NUM 5

int main()
{
  void print_msg(char *);
  
  print_msg("Hello");
  print_msg("World\n");
}

void print_msg(char *m)
{
  int i;
  for(i=0;i<NUM;i++){
    printf("%s",m);
    fflush(stdout);
    sleep(1);
  }
}
