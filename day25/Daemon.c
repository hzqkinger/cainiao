#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>

int main()
{
	umask(0); //1.调用umask将文件模式创建屏蔽字设置为0
	if(fork() > 0)//2.调用fork，然后父进程退出
		exit(1);
	setsid();//3.调用setsid创建会话
	chdir("/");//4.将当前目录更该为根目录
	close(0);//5.关闭不再需要的文件描述符
	close(1);
	close(2);
	signal(SIGCHLD,SIG_IGN);//6.忽略SIGCHLD信号

	while(1){
		sleep(1);
	}

	return 0;
}
