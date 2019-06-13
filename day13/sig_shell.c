//--------------------有点晕--------------------
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

static void sig_int(int signo)
{
		printf("interrupt\n%% ");
}

int main(void)
{
		char buf[4096];
		pid_t pid;
		int status;

		if(signal(SIGINT,sig_int) == SIG_ERR)
				printf("signal error");

		printf("%% ");
		while(fgets(buf,4096,stdin) != NULL){
				if(buf[strlen(buf)-1] == '\n')
						buf[strlen(buf)-1] = 0;
				if((pid = fork()) < 0){
						printf("fork error");
				}
				else if(pid == 0){
		
						printf("could't execute: %s",buf);
						exit(127);
				}
				if((pid = waitpid(pid,&status,0)) < 0)
						printf("waitpid error");
				printf("%% ");
		}
		exit(0);
}
