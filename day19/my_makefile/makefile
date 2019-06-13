include a.mk


# main:main.c libabc.a           #利用makefile生成一个静态库
# 	gcc -o $@ $^
# libabc.a:add.c sub.c
# 	gcc -c add.c -o add.o
# 	gcc -c sub.c -o sub.o
# 	ar -rc libabc.a *.o
# .PHONY : clean
# clean:
# 	rm -f main *.o

# src = $(wildcard *.c)           #makefile中变量的使用
# obj =$(src:.c=.o)
# main:$(obj)
# 	gcc -o $@ $^
# %.o:%c
# 	gcc -o $@ -c $^
# .PHONY : clean
# clean:
# 	rm -f main *.o

# main:main.o add.o sub.o                 #makefile中的第一个木比哦啊会被作为其默认目标
# 	gcc main.o add.o sub.o -o main
# 
# main.o:main.c
# 	gcc -c main.c -o main.o
# 
# add.o : add.c
# 	gcc -o add.o -c add.c
# 
# sub.o : sub.c
# 	gcc -o sub.o -c sub.c
# 
# .PHONY : clean                         #伪目标的特性是：总是被执行
# clean:
# 	rm -f main main.o add.o sub.o

# #src = main.c add.c sub.c
# src = $(wildcard *.c)
# obj =$(src:.c=.o)
# main:$(obj)
# 	gcc -o $@ $^
# # $(obj):$(src)     这个是错误的，因为使用$(obj):$(src)不会自动推进；但是下面是正确的，使用%.o:%.c会自动推进
# # 	gcc -o $@ $^
# %.o:%c
# 	gcc -o $@ -c $^
# 	
# # main.o :main.c
# # 	gcc -c $<
# # add.o : add.c
# # 	gcc -c $<
# # sub.o : sub.c
# # 	gcc -c $< 
# 
# .PHONY : clean
# clean:
# 	rm -f main *.o


