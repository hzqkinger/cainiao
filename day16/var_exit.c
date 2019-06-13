#include <stdio.h>
#include<stdlib.h>

#include<unistd.h>
int main(int argc, char **argv)
{

		printf("hello world!");

//		exit(0);//不是说该函数会执行一系列的清理处理，包括调用执行终止处理程序，关闭所有标准IO流等，然后才进入内核（为什么我这里还是没输出）
		//_exit(0);//不进行清理工作，直接进入内核，放在unistd.h里面
//	    _Exit(0);//也不进行清理工作直接进入内核，和exit一样，放在stdlib.h里面

}
