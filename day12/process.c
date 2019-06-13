#include<stdio.h>
//#include<stdlib.h>

int main()
{
		printf("hehe\n");
		//exit(3);//由于历史原因，exit函数总是执行一个标准I/O库的清理关闭工作:对于所有打开流调用fclose函数
		//_exit(0);
		//_Exit(0);
		printf("haha\n");
		//若main函数终止状态没有显式使用return语句或调用exit函数，那么进程终止状态是未定义的。
		
		return 0;
		//exit(0);等价于return 0;
}
// 如何打印一个进程的终止状态：
//    ./a.out 先执行一下该函数
//    echo $? 打印终止状态
