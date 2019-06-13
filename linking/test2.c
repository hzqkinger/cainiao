//为了大概印象的查看各种变量是处于什么段
int printf(const char *format,...);

int global = 4;
int global2;

void func1()
{
	int a = 0;
	int b;

	static int c = 3;
	static int d;

	printf("&func1 = %u\n",&func1);
	printf("&a = %u\n",&a);
	printf("&b = %u\n",&b);
	printf("&c = %u\n",&c);
	printf("&d = %u\n",&d);
}
int main()
{
	int a = 0;
	int b;

	static int c = 3;
	static int d;

	printf("&main = %u\n",&main);
	printf("&a = %u\n",&a);
	printf("&b = %u\n",&b);
	printf("&c = %u\n",&c);
	printf("&d = %u\n",&d);
	printf("&global = %u\n",&global);
	printf("&global2 = %u\n",&global2);
	
	printf("\n");
	func1();
	return 0;
}
