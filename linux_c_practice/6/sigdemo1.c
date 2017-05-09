#include<stdio.h>
#include<signal.h>

int main()
{
  void f();
  int i;
  signal(SIGINT,f);
  for(i=0;i<5;i++){
    printf("hello\n");
    sleep(1);
    }
}

void f()
{
  printf("OUCH!\n");
}
