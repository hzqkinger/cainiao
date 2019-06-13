src = $(wildcard *.c)
obj = $(src:.c=.o)
#.SECONDARY:$(obj)   #该代码的含义是确保不清除中间文件
.INTERMEDIATE:$(obj) #该代码的含义是把某些文件申明为中间文件
main:$(obj)
.PHONY:clean
clean:
	$(RM) main



#	@echo $(RM)
#	@echo $(AR)
#	@echo $(CC)
#	@echo $(CXX)
#	@echo $(CPP)
