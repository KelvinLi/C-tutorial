bin := array-pointer array-multidim pointer-arith pointer-struct struct-doll

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
