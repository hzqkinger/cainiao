#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
		pid_t pid;
		pid = fork();
		if(pid < 0){
				printf("fork error\n");
		}
		else if(pid == 0){
				printf("haha\n");
		}
		else{
				printf("parnet");
				printf("%d\n",wait(NULL));
		}
}

