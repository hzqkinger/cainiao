# #####################  对应day19.txt的思路三  #################
src = hello.c
hello:main.c libmyhello.so
	gcc -o hello main.c -L. -lmyhello      #这种写法生成的可执行程序 不能 直接运行
#	gcc -o hello main.c ./libmyhello.so    #这种写法生成的可执行程序 能   直接运行
libmyhello.so:$(src)
	gcc -o libmyhello.so -shared -fPIC $(src)

.PHONY:clean
clean:
	rm -f hello libmyhello.so

# #####################  对应day19.txt的思路二  #################
# obj = hello.o
# hello:main.c libmyhello.a
# 	gcc -o hello main.c libmyhello.a
# libmyhello.a:$(obj)            #将所有的.o文件打包成一个静态库
# 	ar -cr libmyhello.a $(obj)
#
# .PHONY:clean
# clean:
# 	rm -f hello *.o libmyhello.a


# #####################  对应day19.txt的思路一  #################
# obj = hello.o main.o
# .INTERMEDIATE:$(obj)
# hello:$(obj)
# 
# .PHONY:clean
# clean:
# 	rm -f hello
