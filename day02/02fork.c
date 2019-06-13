#include<stdio.h>
#include<stdlb.h>
#include<unistd.h>

int main(void)
{
pid_t pid;
printf("before fork");

pid = fork();
if(pid == -1)perror("error"),exit(1);
if(pid == 0)
{

}
}
