#include<stdio.h>
#include<unistd.h>

int main()
{
		int i;
		for(i = 0;i<3;++i){
				printf("111111111111\n");
				fork();
				//printf("222222222222\n");
				sleep(2);
		}
		return 0;
}
