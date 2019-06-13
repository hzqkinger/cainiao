# 1 "main.c"
# 1 "<built-in>"
# 1 "<命令行>"
# 1 "main.c"
#pragma pack(4)







extern int swap_global;


extern int printf(const char* format,...);
int globa_var = 84;
int global_var2;
void func1(int i)
{
 printf("%d\n",i);
}


int main()
{
 int buf[]= {1,2};

 int tmp = 10;
 tmp = buf[0];
 buf[0] = buf[1];
 buf[1] = tmp;




 static int static_var = 85;
 static int static_var2;
 int a = 1;
 int b;

 func1(static_var + static_var2 + a + b);
 return 0;
}
