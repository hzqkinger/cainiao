#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid = fork();

	if(pid == 0){
		setpgid(getpid(),0);
		printf("in child pgid is %d\n",getpgrp());
	}else{
		sleep(1);
		printf("in parent1 pgid is %d\n",getpgrp());
	}
	
	wait(NULL);
	printf("in parent2 pgid is %d\n",getpgrp());
	return 0;
}
