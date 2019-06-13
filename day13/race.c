#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

static void charatatime(char *);

int main()
{
		pid_t pid;
		if((pid = fork()) < 0)
				printf("fork error\n");
		else if(pid ==0){
				charatatime("output from child\n");
		}
		else{
				charatatime("output frome parent\n");
		}
		exit(0);
}

static void charatatime(char *str)
{
		char *ptr;int c;

		setbuf(stdout,NULL);
		for(ptr = str;(c = *ptr++)!=0;)
				putc(c,stdout);
}
