#include<stdio.h>
#include<stdlib.h>

int main()
{
		char *val;
		const char* name = "ABC";

		//获取ABC环境变量的值
		val = getenv("PATH");
		printf("1. %s = %s\n",name,val);
		
		//覆盖写入环境变量
		setenv(name,"I will get it",1);
		val = getenv(name);
		printf("3. %s = %s\n",name,val);

		//删除一个环境变量
		//int ret = unsetenv("ABC");
		//printf("4. %s = %s\n",name,val);

		//val = getenv(name);
		//printf("5. %s = %s\n",name,val);
		
						return 0;
}
