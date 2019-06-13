#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
		pid_t pid = fork();
		if(pid <0){
				printf("fork error\n");
				exit(0);
		}
		else if(pid == 0)
		{
				printf("In child process\n");
				printf("%d\n",wait(NULL));
		}
		else{

				sleep(2);//是不是可以认为其实父子进程一直在交互运行，当执行到该代码时父进程在睡觉，直到耗尽运行时间又开始执行子进程。
				printf("In parent process\n");
				printf("%d\n",wait(NULL));
				//sleep(2);
		}
}
//头文件：#include<sys/types.h>
//        #include<sys/wait.h>
//等待函数1：pid_t wait(int *status);    //其中status不是空指针，则存储了子进程终止时的状态；否则忽略终止状态
//           返回值，若成功则返回被等待进程的pid，失败则返回-1.
