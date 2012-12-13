bin := arrayp simple stringp structp

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	rm -f $(bin)
