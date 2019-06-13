#include <stdio.h>
int stream_attribute(FILE *fp)
{
		if(fp->_flags & _IO_UNBUFFERED)
		{
				printf("The IO type is unbuffered\n");
		}else if(fp->_flags & _IO_LINE_BUF){
				printf("The IO type is line buf\n");
		}else{
				printf("The IO type is full buf\n");
		}
		printf("The IO size : %d\n",fp->_IO_buf_end - fp->_IO_buf_base);
		return 0;
}

int main()
{
		FILE *fp;
//		getchar();
		stream_attribute(stdin);
		printf("___________________________________\n\n");
		stream_attribute(stdout);
		printf("___________________________________\n\n");
		stream_attribute(stderr);
		printf("___________________________________\n\n");
		if((fp = fopen("test.txt","w+")) == NULL)
		{
				perror("fail to fopen");
		}
//		printf("before write:\n");
//		stream_attribute(fp);
//		fputc('a',fp);
//		printf("after write:\n");
		stream_attribute(fp);
		return 0;
}
//从以上我们可以看出，标准I/O并不是一开始就分配的，只有进行了输入或者输出的操作才进行分配的，
//标准输入和标准输出默认是全缓冲，但是如果和终端关了就是行缓冲。可以看到在linux操作系统中行缓冲的大小是1k，全缓冲的大小是4k。
