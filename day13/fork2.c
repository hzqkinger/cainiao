#include<stdio.h>
#include<unistd.h>

int main()
{
		pid_t pid;
		if((pid = fork()) < 0){
						printf("fork error\n");
						}
		else if(pid == 0){
						printf("In child\n");
		}
		else{
			printf("In parent\n");
		}
}
