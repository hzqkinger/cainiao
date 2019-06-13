#include<stdio.h>
/*
 *
 *this is multi comment
 *
 * */
#define MSG "this is maomaochong\n"


int main()
{
#pragma warning("this is")
#if WIN
printf(MSG);
else
printf("It'start");
#endif

return 0;

}
