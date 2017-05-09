#include<stdio.h>
#include<ctype.h>

int main()
{
	char alpha;
	printf("please enter a alphabet :\n");
	while((alpha=getchar())!='#')
	{
	if(alpha=='\n')
	continue;
	switch(tolower(alpha))
	{
	  case 'a': 
	    printf("apple\n"); 
	    break;
	  case 'b': 
	    printf("banana\n"); 	
	    break;
	  case 'c': 
	    printf("chair\n"); 
	    break;
	  default : 
	    printf("OH NO!\n"); 
	}
	while(getchar()!='\n')
	continue;
	}
	
	return 0;
}
