#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid = fork();
	if(pid == 0){
		while(1){
			sleep(1);
			printf("in child running happily and my parent is %d\n",getpid());
		}
	}else{
		while(1){
			sleep(1);
			printf("in parent running happily+++++++++++++++++++++++++=\n");
		}
	}

	return 0;
}

//int main()
//{
//	pid_t pid = fork();
//	if(pid == 0){
//		while(1){    //1.子进程一直运行
//			sleep(1);
//			printf("in child running happily and my parent is %d\n",getpid());
//		}
//	}else{
//		int i = 0;                                                      //所以不会出现孤儿进程
//		while(i++ < 6){//2.看似父进程只运行了六秒，其实父进程并没有退出（因为用kill还能杀死父进程）（ps:杀一个不存在的进程会报错）
//			sleep(1);
//			printf("in parent running happily+++++++++++++++++++++++++=\n");
//		}
//	}
//
//	return 0;
//}
