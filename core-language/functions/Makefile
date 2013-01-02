bin := arg_array arg_primitive arg_struct simple

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
