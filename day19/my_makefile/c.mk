name = a b c d
files = $(foreach n,$(name),$(n).o)
ll:
	@echo $(name)
	@echo $(files)
	@echo $(MAKECMDGOALS)
