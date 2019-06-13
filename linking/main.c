#pragma pack(4)
//#include "swap.c"             这里会把swap.c模块的代码全部加载到main.c模块中
//gcc -o main main.c swap.c   而这里则会把这两个文件分离编译，最后再链接在一起
//
//
//简单的交换两个变量
/*啦啦啦*/

extern int swap_global;
#define Size 10

extern int printf(const char* format,...);
int globa_var = 84;
int global_var2;
void func1(int i)
{
	printf("%d\n",i);
}


int main()
{
	int buf[]= {1,2};

	int tmp = Size;
	tmp = buf[0];
	buf[0] = buf[1];
	buf[1] = tmp;

//	swap(buf[0],buf[1]);

//程序员自我修养 p61
	static int static_var = 85;
	static int static_var2;
	int a = 1;
	int b;

	func1(static_var + static_var2 + a + b);
	return 0;
}
