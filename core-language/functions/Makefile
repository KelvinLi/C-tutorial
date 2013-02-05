bin := arg_array arg_primitive arg_struct func_pointer simple

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
