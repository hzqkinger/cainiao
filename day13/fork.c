#include<stdio.h>
#include<unistd.h>

int main()
{
		printf("调用进程的ID：%d\n",getpid());
		printf("调用进程的父进程ID：%d\n",getppid());
		printf("调用进程的实际用户ID：%d\n",getuid());
		printf("调用进程的有效用户ID：%d\n",geteuid());
		printf("调用进程的实际组ID：%d\n",getgid());
		printf("调用进程的有效组ID：%d\n",getegid());
}
