#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
//查看正在运行的进程
int main(void)
{
		pid_t pid;
		pid = fork();
		if(pid<0){
				fprintf(stderr,"fork failed");
				exit(-1);
		}
		else if(pid == 0){
				execlp("/usr/bin/top","top",NULL);
		}
		else{//父进程等待子进程运行完之后在继续运行
				wait(NULL);
				printf("child complete\n");
				exit(0);
		}
}

