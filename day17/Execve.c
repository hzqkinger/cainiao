#include<stdio.h>
#include<unistd.h>

//int main()
//{
	    //execl("/bin/ls","/bin/ls","-al",NULL);
	   // execlp("/bin/ls","ls","-al",NULL);
//	    execlp("ls","-al",NULL);
//		printf("execl error\n");
//		return 0;
//}

int main()
{
		//char *arg[] = {"ps","-o","pid,pid,comm"NULL};
//		char *path[] = {"PATH=/home}
		
		//execv("/bin/ps",arg);
		execlp("/home/huangzhiqiang/day17","./test",NULL);
		printf("exec error\n");
		return 0;
}
