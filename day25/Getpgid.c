#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid = fork();
	if(pid < 0){
		perror("fork\n");
		exit(1);
	}else if(pid == 0){
		printf("in child ppid:%d\n",getppid());
	
		pid_t pgrp = getpgrp();
		printf("in child pgrp:%d\nin child pid:%d\n",pgrp,getpid());
	
		pid_t pgid = getpgid(getpid());
		printf("in child pgid:%d\n",pgid);

	}else{
		printf("in parent ppid:%d\n",getppid());
	
		pid_t pgrp = getpgrp();
		printf("in parent pgrp:%d\nin parent pid:%d\n",pgrp,getpid());
	
		pid_t pgid = getpgid(getpid());
		printf("in parent pgid:%d\n",pgid);
	}
	wait(NULL);

//	int i = 0;
//	while(++i){
//		printf("%d\n",i);
//		sleep(1);
//	}
	return 0;
}
