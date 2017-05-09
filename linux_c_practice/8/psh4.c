#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<signal.h>

#define MAXARGS 20
#define ARGLEN 100

int main()
{
    char *arglist[MAXARGS+1];
    int numargs=0;
    char argbuf[ARGLEN];
    char *makestring();

  
      execlp("ls","ls","-a","-l",NULL);
}
