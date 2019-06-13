#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include<unistd.h>

//show colors

int main()
{
    char buf[102] = "#";
    int i;
    for(i = 1;i<=100;i++)
    {
     printf("[%-100s] %d%%\r",buf,i);
    fflush(stdout);
     buf[i] = '#';
    usleep(10000);
     }
}
