#include<stdio.h>
#include<stdlib.h>

#define DELAY 10

void parent_code(int childpid);
void child_code(int delay);

int main()
{
	int newpid;
	printf("my pid is %d\n",getpid());
	if((newpid=fork())==-1)
	  perror("fork");
	else if(newpid==0)
	  child_code(DELAY);
	else
	  parent_code(newpid);
}

void child_code(int delay)
{
	printf("I am a child , and my pid is %d\n",getpid());
	printf("and I want to sleep for %d seconds\n",DELAY);
	  sleep(DELAY);
	exit(17);
}

void parent_code(int childpid)
{
	int re_wait;
	re_wait=wait(NULL);
	printf("OK , I am OK..nice dream..so ...I am a parent , and my pid is %d\n",getpid());
	printf("and my child pid is %d\n",childpid);
	printf("my child pid is %d again\n",re_wait);
}
