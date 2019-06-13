
#include<stdio.h>
//在main函数之前运行的函数
__attribute((constructor)) void before_main()
	
{
	
	printf("%s\n",__FUNCTION__);
	
}
//在main函数之后运行的函数
__attribute((destructor)) void after_main()
	
{
	
	printf("%s\n",__FUNCTION__);
	
}

int main( int argc, char ** argv )
	
{
	
	printf("%s\n",__FUNCTION__);
	
	return 0;
	
}
//a. gcc使用crtbegin.o/crtend.o/gcrt1.o编译构建了你的程序，当然其他默认库被默认动态链接。可执行程序的起始地址被设置为_start
//b. Kernel加载可执行程序和设置text/data/bss/stack，特别是，kernel为参数和环境变量分配了页，把所有必要信息压栈。
//c. 控制权限交给_start，_start通过kernel设置的栈获得所有信息，并为__libc_start_main设置参数堆栈，并且调用它。
//d. __libc_start_main初始化必要内容，尤其是C库（比如malloc）和线程环境和调用main()。
//e. 通常main函数以 main(argv, argv)这样的形式被调用。实际上，有趣的是main的函数签名。__libc_start_main认为main的函数签名是main(int, char **, char **))))
