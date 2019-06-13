extern int shared;

int func(int a)
{
	return a + shared;
}

int main()
{
	int a = 100;
	swap(&a,&shared);
	return 0;
}
