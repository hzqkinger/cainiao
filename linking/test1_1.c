int printf(const char *format,...);

int global;
__attribute__((weak)) int global2 = 4;
//小小试验一下弱符号
void f1()
{
	//int global2 = 4;
	printf("global = %d\n",global);
	printf("global2 = %d\n",global2);
}
