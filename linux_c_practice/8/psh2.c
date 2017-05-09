#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#define ARGLEN 100
#define ARGNUM 20

void execute(char *list[]);
char *makestring(char buf[]);

int main()
{
  int argnum;
  char argbuf[ARGLEN];
  char *arglist[ARGNUM];
  
  while(argnum<ARGNUM){
  printf("arg[%d]:",argnum);
    if(fgets(argbuf,ARGLEN,stdin) && *argbuf!='\n')
      arglist[argnum++]=makestring(argbuf);
    else if(argnum>0)
      {
      arglist[argnum]=NULL;
      execute(arglist);
      argnum=0;
      }
    }
}

void execute(char *list[])
{
  int re_pid;
  re_pid=fork();
  if(re_pid==-1)
    {
    perror("fork error :");
    exit(1);
    }
  else if(re_pid==0)
    {
    execvp(list[0],list);
    exit(1);
    }
  else
    {
      wait(NULL);
    }
}

char *makestring(char buf[])
{
  char *cp;
  void *malloc(size_t );
  buf[strlen(buf)-1]='\0';
  cp=malloc(strlen(buf)+1);
  if(cp==NULL)
    {
    perror("no memory\n");
    exit(1);
    }
  strcpy(cp,buf);
  return cp;
}
