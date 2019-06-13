#include"proccess.h"

void proccess()
{
		int i = 1;
		char str[_SIZE_];
		memset(str,'\0',sizeof(str));
		str[0] = '[';
		str[_SIZE_ - 1] = '\0';
		str[_SIZE_ - 2] = ']';
		char index[5] = "-\\|/\0";
		while(i<100){
		str[i] = '#';
		printf("%s[%d%%%c]\r",str,i,index[i%4]);
		fflush(stdout);
		i++;
		usleep(100000);
		}
		printf("\n");
}
