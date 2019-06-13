/*************************************************************************
    > File Name: test.c
    > Author: 黄志强
    > Mail: 2069085311@qq.com 
    > Created Time: 2019年06月13日 星期四 12时10分05秒
 ************************************************************************/

#include<stdio.h>
#include<stddef.h>

struct te1 
{
	int a;
	double d;
};
int main()
{
	printf("%d\n",sizeof(struct te1));
	printf("%d\n",offsetof(te1,a));
	printf("%d\n",offsetof(te1,d));

return 0;
}

