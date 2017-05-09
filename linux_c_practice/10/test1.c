#include<stdio.h>
#include<fcntl.h>

int main()
{
  int pid;
  int apipe[2]; 
  int a,b;
  close(1);close(0);
  pipe(apipe);
  a = apipe[0];
  b = apipe[1];
  close(1);
  open("/dev/pts/0",O_WRONLY);
  printf("%d%d\n",a,b);
}
