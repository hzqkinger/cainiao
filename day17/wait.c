#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
		pid_t pid = fork();
		if(pid < 0)
				exit(1);
		else if(pid == 0)
		{
				printf("in child child_pid:%d\n",getpid());
				//exit(5);
		}
		else
		{
				//sleep(2);
				int stat = 0;
				int option;
				printf("parent_pid:::%d\n",getpid());
				printf("in parent\n");
				//printf("pid:%d,parent_pid:%d\n",wait(&stat),getpid());
//				printf("pid:%d,parent_pid:%d\n",waitpid(-1,&stat,WNOHANG),getpid());
				printf("pid:%d,parent_pid:%d\n",waitpid(-1,&stat,0),getpid());
				
				printf("hah:%d   option:%d\n",WIFEXITED(stat),WNOHANG);
				printf("hah:%d   option:%d\n",WEXITSTATUS(stat),option);
		}
		return 0;
}
