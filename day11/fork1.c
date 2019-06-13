#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

int value;

int main()
{
		pid_t pid;
		pid = fork();
		if(pid < 0){
				fprintf(stderr,"Fork failed");
				exit(-1);
		}
		else if(pid == 0){
				while(1){
						//printf("In child process,value is %d\n",++value);
						printf("In child process,value's address is %p\n",&value);
						sleep(1);
				}
		}
		else{
				while(1){
						//printf("In parent proceess,value is %d\n",value);
						printf("In parent proceess,value's address is %p\n",&value);
						sleep(1);
				}
		}
}
