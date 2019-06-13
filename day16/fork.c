#include<stdio.h>
#include<unistd.h>

int glob = 8;//全局变量
char buf[]="a write to stdout\n";
int main()
{
		int var = 88;
		pid_t pid;
		printf("before fork555555");//没有换行符与有换行符，输出结果不一样
		//printf("before fork555555\n");
		if(write(STDOUT_FILENO,buf,sizeof(buf)-3) != sizeof(buf)-3)
				perror("write error");
		printf("before fork\n");

		if((pid = fork()) < 0)
				perror("fork error");
		else if(pid == 0)
		{
				glob++;
				var++;
		}
		else
				sleep(2);

		printf("pid=%d,glob=%d,var=%d\n",getpid(),glob,var);
		printf("after fork55555\n");
		return 0;
}
