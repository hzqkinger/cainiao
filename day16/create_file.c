#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
		int fd;
		char buf[1024] = "hello world tian\n";
		fd = open("abc",O_CREAT | O_RDWR | O_APPEND,0644);
		printf("fd = %d\n",fd);
		write(fd,buf,strlen(buf));
		close(fd);
		return 0;
}
