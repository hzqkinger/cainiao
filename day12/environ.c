#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char arr[100];
		char arr1[20];
		printf("请输入需要查找的环境变量：\n");
		scanf("%s",arr1);
		strcpy(arr,getenv(arr1));
		printf("%s\n",arr);
		return 0;
}
