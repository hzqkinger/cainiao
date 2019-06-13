#include<stdio.h>
#include<stdlib.h>

//通过系统调用，获取到当前进程的进程id

int g_val = 100;
int gg_val;
void test()
{
		int a = 10;
		int b = 20;
		printf("test stack1 address:0x%x\n",&a);
		printf("test stack2 address:0x%x\n",&b);
}
void (*fp)();


int main()
{
		int a = 10;
		int *heap = (int*)malloc(sizeof(int));
		fp = test;
		printf("code address:0x%x\n",fp);
		printf("data address:0x%x\n",&g_val);
		printf("data address:0x%x\n",&gg_val);
		printf("heap address:0x%x\n",heap);
		printf("main stack0 address:0x%x\n",&a);
		fp();
		return 0;
}
