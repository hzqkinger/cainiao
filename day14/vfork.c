#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int globvar = 6;

int main()
{
	int var;
	pid_t pid;
	var = 88;
	//什么是行缓冲，什么时全缓冲，什么是不带缓冲？
	printf("before vfork");//we would flush stdout  会输出两次
	//printf("before vfork\n");//we don't flush stdout  只会输出一次
	if((pid = fork()) < 0){
	//if((pid = vfork()) < 0){  //vfork创建子进程一般总会立即调用exce或exit；不过在子进程调用exce或exit之前，它在父进程空间运行
			printf("vfork error\n");
	}
	else if(pid == 0){
			globvar++;
			var++;
			printf("In child's process\n");
	//		_exit(0);
	}
	else
	{
			sleep(2);//该语句保证子进程先运行
			printf("In parent's process\n");
	}
	printf("pid = %ld, glob = %d, var = %d\n",(long)getpid(),globvar,var);
//	exit(0);
}
