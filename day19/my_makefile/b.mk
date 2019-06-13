##########################  5 使用函数    ################################################
comma := ,
empty :=
space:= $(empty) $(empty)
foo:=     a   b c  
bar := $(subst $(space),$(comma),$(strip $(foo)))
all:
	@echo $(foo)x
	@echo $(bar)x

##########################  4 使用条件判断  ##############################################
# ifeq   ifneq    ifdef  ifndef    else   endif
# add = sub.c
# all = $(add:.c=.o)
# ${all}:$(add)
# ifeq ($(add),add.c)
# 	gcc -o add.o -c ${add}
# else
# 	@echo $(all)
# endif

##########################  3 两种变量的高级用法  ############################################
# foo = add.c main.c sub.c  
# #bar = $(foo:.c=.o)         #a.变量值的替换
# bar = $(foo:%.c=%.o)
# main:$(bar)
# $(bar):
# #%.o:%.c
# .PHONY:clean
# x = y
# y = z
# a := $($(x))
# clean:
# 	rm -f ma?n ${bar}
# 	@echo $a     #b.把变量的值再当成变量

##########################  2 四个等号的区别  ##############################################
# =    :=    ?=    +=
# a := $b
# b = $a
# override src = ss
# define two_line
# @echo foo
# @echo $(src)
# endef
# #obj = main.c add.c
# #obj +=sub.c
# all:
# #	@echo $a
# #	@echo $(src)
# 	@echo $(two_line)
# 	${two_line}
# #obj := more	

############################  1 变量的基础  #####################################################
# 在makefile中定义的变量，就像c/c++语言中的宏一样，它代表了一个文本字符串。
# 在makefile执行的时候，变量会自动原模原样地展开在所使用的地方。
# 在makefile中，变量可以使用在“目标”“依赖目标”“命令”等里面
# 变量名可以包括字符数字下划线（可以是数字开头），但不能包含 : # = 空格 回车 等特殊字符
# 变量对大小写敏感，如foo Foo是两个不同的变量名
# 使用变量名时，要用小括号或大括号括起来，（假如你的变量名只是一个字符，也可以不加括号）
#
# foo = c
# ${foo}lean:
# 	$(foo)d ../
# 	g$(foo)$(foo) -$(foo) add.$(foo) -o add.o
# 	rm -f add.o
