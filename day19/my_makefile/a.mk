obj1 = main.o add.o sub.o a.mk day19.txt
obj =$(filter %.o,$(obj1)) 
main:${obj}
#	@echo 正在将所有的.o文件链接成可执行文件main
#把obj1变量里的*.o文件过滤出来,然后赋值给obj变量
$(filter %.o,$(obj)):%.o:%.c
#	@echo 正在将 所有的.c文件编译成目标文件
	gcc -c $< -o $@
.PHONY:clean
clean:;rm -f main *.o


# src = $(wildcard *.c)
# obj = $(src:.c=.o)
# main:$(obj)
# 	gcc -o main $(obj)
# main.o add.o:
# sub.o:
# .PHONY:clean
# clean:;rm -f m?[list]n $(obj)


# 如果想要让上一条命令的结果应用于下一条命令，则应该用分号分隔这两条命令
exec:
	cd ../
	pwd
	cd /home
	pwd
exec2:
	cd ../;pwd
	-mkdir dir1
