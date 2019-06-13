#include<stdio.h>
#include<stdlib.h>

int main()
{
//		extern char **environ;
//		int i = 0;
//		for(;environ[i] != NULL;i++)
//		{
//				printf("%s\n",environ[i ]);
//		}
		
	char *p = getenv("PATH");
	printf(p);printf("\n");

	unsetenv("/home/huangzhiqiang/day20");

		return 0;
}
