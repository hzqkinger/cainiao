#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
/*int main()
{
		pid_t pid;
		int status;
		pid = fork();
		if(pid < 0){
				printf("fork error\n");
		}
		else if(pid == 0){
				int i = 0;
				while(i){
					printf("heh:%d\n",i);
					++i;
					sleep(1);
				}
		}
		else{
				waitpid(pid,&status,0);
				if(WIFEXITED(status)){
						printf("lalala\n");
				}
		}
}*/

int main()
{
		pid_t pid = fork();
		if(pid < 0){
			printf("fork error\n");
			return 1;
		}
		else if(pid == 0){
			printf("child is running,pid is:%d\n",getpid());
			//sleep(3);
			//exit(257);

		}
		else{
			int status = 0;
			pid_t ret = 1;
			do{
			//ret = waitpid(-1,&status,0);//阻塞式等待
			ret = waitpid(-1,&status,WNOHANG);//非阻塞式等待
			if(ret == 0)printf("this is test for wait\n");
			sleep(1);
			}while(ret == 0);
		
			if(	WIFEXITED(status) && ret == pid){
				printf("wait child 3s success,child return code is:%d.\n",WEXITSTATUS(status));
			}else{
			printf("wait child failed,return.\n");
			return 1;
			}
		}
}




















