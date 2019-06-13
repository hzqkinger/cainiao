int func1(int left,int mid,int right)
{
	int a = left;
	a += mid + right;

	return a;
}

int mian()
{
	func1(1,2,3);
	return 0;
}

/*
 *调用函数与被调用函数之间的交互有两种：参数的传递，返回值
 * */
