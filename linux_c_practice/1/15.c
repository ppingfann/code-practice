#include<stdio.h>
#include<stdlib.h>
#define PAGELENGTH 30
#define LINELENGTH 512
int main(int argc,char *argv[])
{
	FILE *fp;
	void more(FILE *);
	int see_more();
	if(argc!=2)
	  printf("please use it like this:%s filename\n",argv[0]);
	else if((fp=fopen(argv[1],"r"))==NULL)
	  printf("WARNNING: Can't open this file:%s\n",argv[1]);
	else
	more(fp);
	return 0;
}

void more(FILE *fp)
{
	char line[LINELENGTH];
	int count=0;
	while(fgets(line,LINELENGTH,fp)){
	  if(count==PAGELENGTH)
	count-=see_more();	
	count++;
	if(fputs(line,stdout)==EOF)
	exit(1);
	}
}

int see_more()
{
	int c;
	printf("\033[7m..more???..\033[m");
	c=getchar();
	if(c=='q')
	exit(1); else
	if(c==' ') 
	return LINELENGTH; else
	if(c=='\n')
	return 1; else
return 0;
}
