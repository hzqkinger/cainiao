#ifdef LIB_H
#define LIB_H

void foobar(int i);

#endif

/*
 * gcc -fPIC -shared -o Lib.so Lib.c
 *
 *
 *      在linux下，可执行文件爱你 所需的 动态链接器的路径几乎都是 /lib64/ld-linux-x86-64.so.2  
 * **/
