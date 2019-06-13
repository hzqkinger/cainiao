//#include<stdio.h>
//当把这个头文件包含进来时，程序在编译期间就会出现语法错误，符号重定义了

int printf(int a)
{
	return a;
}
int stdout = 10;

int main()
{
	printf(1);	
	return 0;
}

/*
 * test3.c:3: 错误：与‘printf’类型冲突
 * */

/*
 *当程序编译
 * */
