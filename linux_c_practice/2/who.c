#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<utmp.h>
#include<time.h>

void information(struct utmp *);
void timetrans(long );

int main()
{
	int fd;
	struct utmp record;
	if((fd=open(UTMP_FILE,O_RDONLY))==-1)
	  {
	fprintf(stderr,"failed to open the file.\n");
	perror(UTMP_FILE);
	exit(1);
	  }
	while(read(fd,&record,sizeof(record))==sizeof(record))
	  information(&record);
	if(close(fd)==-1)
	  fprintf(stderr,"failed to close the file.\n");
	return 0;
}

void information(struct utmp *a)
{
	if(a->ut_type!=USER_PROCESS)
	return;
	
	printf("%-8s",a->ut_name);
	printf(" ");
	printf("%-8s",a->ut_line);
	printf(" ");
	timetrans(a->ut_time);
	printf("(%8s)",a->ut_host);
	printf("\n");
}

void timetrans(long time)
{
	printf("%-18.19s",ctime(&time));
}
