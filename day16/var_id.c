#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
		uid_t uid,euid;
		pid_t pid,ppid;

		pid = fork();

		if(pid < 0)
		{
				printf("%d\n",errno);
				exit(2);
		}
		else if(pid == 0)
		{
				uid = getuid();
				euid = geteuid();
				printf("child->pid:%d,ppid:%d,uid:%d,euid:%d\n",getpid(),getppid(),uid,euid);
				exit(0);
		}
		else
		{
				uid = getuid();
				euid = geteuid();
				printf("parent->pid:%d,ppid:%d,uid:%d,euid:%d\n",getpid(),getppid(),uid,euid);
				sleep(2);
		}
		return 0;
}
