#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int g_val = 0;

int main()
{
		int val = 0;
		pid_t pid = vfork();
		if(pid < 0)
		{
				printf("fork error\n");
				exit(1);
		}
		else if(pid == 0)
		{
				//printf("in child\n");
				++g_val;
				++val;
				printf("child exit\n");
				sleep(2);
				exit(0);
		}
		else
		{
				printf("in patent\n");
				printf("g_val=%d val=%d\n",g_val,val);
		}


		return 0;
}
