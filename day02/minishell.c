#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char buf[1024];
	while(1)
{
	printf("> ");
	scanf("%[^\n]%@c",buf);
}
return 0 ;
}
