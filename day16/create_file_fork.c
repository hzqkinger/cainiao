#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>


int main()
{
		int fd;
		char buf[40] = "this is me\n";
		fd = open("abcd",O_CREAT |O_RDWR | O_APPEND,0664);

		pid_t pid;
		if((pid = fork()) < 0)
		{
				perror("fork error");
				exit(2);
		}
		else if(pid == 0)
		{
				int i = 0;
				while(i < 10)
				{
						char ch1[25];
						sprintf(ch1,"in child:%d fd:%d\n",i,fd);
						//printf("in child:%d\n",i);
						//strcat(buf,ch1);
						strcpy(buf,ch1);
       		            write(fd,buf,strlen(buf));
						++i;
				}
		}
		else
		{
//				sleep(2);
				int i = 1;
				while(i < 10)
				{
						char ch2[25];
						sprintf(ch2,"in parent:%d fd:%d\n",i,fd);
						//printf("in parent:%d\n",i);
						//strcat(buf,ch2);
						strcpy(buf,ch2);
						write(fd,buf,strlen(buf));
						++i;
				}
		}
		return 0;
}
