#include<stdio.h>
#include<stdlib.h>

int g_val = 100;
void test()
{
		int a = 10;
		int b = 20;
		printf("test stack_a adress:0x%x\n",&a);
		printf("test stack_b adress:0x%x\n",&b);
}
void(*fp)();

int main()
{
		int a = 10;
		int *heap = malloc(sizeof(int));
		fp = test;
		printf("main stack0 adress:0x%x\n",&a);
		fp();
		printf("heap adress:0x%x\n",heap);
		printf("data adress:0x%x\n",&g_val);
		printf("code adress:0x%x\n",fp);
		
		return 0;
}
