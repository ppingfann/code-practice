#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<utmp.h>
#include<fcntl.h>

#define SHOWHOST

void showtime(long time);
void show_record(struct utmp *a);
int main()
{
	int fd;
	struct utmp record;
	if((fd=open(UTMP_FILE,O_RDONLY))==-1)
	{
	perror(UTMP_FILE);
	exit(1);
	}
	while(read(fd,&record,sizeof(record))==sizeof(record))
	show_record(&record);
	close(fd);
	return 0;
}

void show_record(struct utmp *a)
{
	if((a->ut_type)!=USER_PROCESS)
	return ;
	printf("%-8.8s",a->ut_name);
	printf(" ");
	printf("%-8.8s",a->ut_line);
	printf(" ");
	showtime(a->ut_time);
#ifdef SHOWHOST
	if(a->ut_host[0]!='\0')
	printf("(%s)",a->ut_host);
#endif
	printf("\n");
}

void showtime(long time)	
{
	printf("%12.12s",ctime(&time)+4);
}
