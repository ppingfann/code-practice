#include<errno.h>
extern int errno;
int sample()
{
	int fd;
	fd=open("file",O_RDONLY);
	if(fd==-1)
	{
	printf("Cannot open file:");
	if(errno==ENOENT)
	printf("There is no such file.\n");
	if(errno==EINTR)
	printf("Interrupted while opening file.\n");
	if(errno==EACCESS)
	printf("You do not have permission to open file.\n");
	...
