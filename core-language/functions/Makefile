bin := arg_primitive arg_struct simple

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	rm -f $(bin)
