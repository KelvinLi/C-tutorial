bin := arg-array arg-primitive arg-struct func-pointer simple

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
