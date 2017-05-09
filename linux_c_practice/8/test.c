#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<signal.h>

#define MAXARGS 20
#define ARGLEN 100

int main()
{
  char *arglist[MAXARGS+1];
  int numargs;
  char argbuf[ARGLEN];
  char *makestring(char buf[]);
  void execute(char *list[]);
  
  numargs = 0;
  while(numargs < MAXARGS){
    printf("arg[%d]:",numargs);
    if((fgets(argbuf,ARGLEN,stdin)!=NULL) && argbuf[0]!='\n')
      arglist[numargs++] = makestring(argbuf);
    else{
      if(numargs > 0)
        arglist[numargs] = NULL;
        execute(arglist);
        numargs = 0;
      } 
    }
}

void execute(char *list[])
{
  int pid,exitstatus;
  
  pid = fork();
  if(pid==-1){
    perror("fork failed");
    exit(1);
    }
  else if(pid == 0){
    execvp(list[0],list);
    perror("execvp failed"); 
    exit(1);
    }
  else{
    while(wait(&exitstatus)!=pid)
      continue;
    }
    printf("child exited with status %d,%d\n",exitstatus>>8,exitstatus&0377);
}

char *makestring(char buf[])
{
  char *cp;
  void *malloc(size_t );
  
  buf[strlen(buf)-1]='\0';
  cp = malloc(strlen(buf));
  strcpy(cp,buf);
  return cp;
}
  
  
