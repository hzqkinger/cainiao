
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
		pid_t id = fork();
		if(id == -1){
				perror("fork error!return code is:i");
				return 2;
		}else if(id == 0){//child
				printf("child pid is:%d\n",getpid());
		    	exit(3);
		}else{//father
				printf("father pid is:%d,return pid is:%d\n",getpid(),id);
				sleep(120);
		}
		return 0;
}
//在这里，先执行父进程再执行子进程.
