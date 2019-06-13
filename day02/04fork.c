#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sched.h>

int main(void)
{
	int i ;
for(i = 0;i<3;++i)
{
	if(fork()== 0)
	break;
}
	
	
	return 0;
}
