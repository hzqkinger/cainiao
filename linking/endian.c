int printf(const char* format,...);

union un
{
	int i;
	char ch;
};
int main()
{
	union un u;
	u.i = 1;
	if(u.ch == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}
