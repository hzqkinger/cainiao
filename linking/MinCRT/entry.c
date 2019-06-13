
#include"minicrt.h"

extern int main(int argc,char *argv[]);
void exit(int);

static void crt_fatal_error(const char* msg)
{
	//printf("fatal_error:%s",msg);
	exit(1);
}

void mini_crt_entry(void)
{
	//初始化argc和argv
	int argc;
	char** argv;

	char* ebp_reg = 0;
	// ebg_reg = %ebp
	asm("movl %%ebp,%0 \n":"=r"(ebp_reg));

	argc = *(int*)(ebp_reg + 4);
	argv = (char**)(ebp_reg + 8);

	//初始化heap和io
	if(!mini_crt_heap_init())
		crt_fatal_error("heap initialize failed");
	if(!mini_crt_io_init())
		crt_fatal_error("io initialize failed");

	//退出
	void exit(int exitCode)
	{
		asm( "movl %0,%%ebx \n\t"
				"movl $1,%%eax \n\t"
				"int $0x80	\n\t"
				"hlt		\n\t"::"m"(exitCode));
	}
}
