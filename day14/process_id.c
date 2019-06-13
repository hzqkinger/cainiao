#include<stdio.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
	uid_t uid;//调用进程的实际用户ID
	uid_t euid;//调用进程的有效用户ID
	pid_t pid;//调用进程的ID
	pid_t ppid;//调用进程的父进程ID

	pid = fork();
	if(pid < 0){
			printf("%d\n",errno);
			exit(2);
	}
	else if(pid == 0)
	{
			uid = getuid();euid = geteuid();
			printf("child->pid:%d,ppid:%d,uid:%d,euid:%d\n",getpid(),getppid(),uid,euid);
			exit(0);
	}
	else
	{

			uid = getuid();euid = geteuid();
			printf("parent->pid:%d,ppid:%d,uid:%d,euid:%d\n",getpid(),getppid(),uid,euid);
			sleep(2);
	}
	return 0;
}
