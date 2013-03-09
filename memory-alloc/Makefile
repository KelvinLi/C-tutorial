bin := simple-alloca simple-malloc simple-obstack

override CFLAGS += -lm

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
