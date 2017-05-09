#include<stdlib.h>
#include<stdio.h>
#include<signal.h>
#include<string.h>
#include<unistd.h>

#define MAXAGES 20
#define ARGLEN 100

int main()
{
	char *arglist[MAXAGES+1];
	int numargs=0;
	char argbuf[ARGLEN];
	char *makestring();
	
	while(numargs<MAXAGES)
	{
	  printf("Arg[%d]?",numargs);
	  if(fgets(argbuf,ARGLEN,stdin)&&*argbuf!='\n')
	    arglist[numargs++]=makestring(argbuf);
	  else	
	  {
	    if(numargs>0)
	  {
	  	arglist[numargs]=NULL;
		execute(arglist);
		numargs=0;
	  }
	}
	}
	return 0;
}
	
int execute(char *arglist[])
{
	execvp(arglist[0],arglist);
	perror("execvp failed");
	exit(1);
}

char *makestring(char *buf)
{
	char *cp;
	void *malloc(size_t );
	
	buf[strlen(buf)-1]='\0';
	cp=malloc(strlen(buf)+1);
	if(cp==NULL){
	  fprintf(stderr,"no memory\n");
	  exit(1);
	}
	strcpy(cp,buf);
	return cp;
}
