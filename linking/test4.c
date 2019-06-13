#include<stdio.h>
//简单查看一下main函数的三个参数都是什么意思
int main(int argc,char *argv[],char *env[])
{
	printf("argc = %d\n",argc);
	int index = 0;
	while(argv[index])
	{
		printf("%s\n",argv[index]);
		++index;
	}
	index = 0;
	while(env[index])
	{
		printf("%s\n",env[index]);
		++index;
	}
	return 0;
}
