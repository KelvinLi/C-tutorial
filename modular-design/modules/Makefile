bin := simple
objects := main.o easy.o stupid.o

$(bin) : $(objects)
	$(CC) $(CFLAGS) -o $(bin) $(objects)

main.o : easy.h stupid.h
easy.o : easy.h
stupid.o : stupid.h

.PHONY : clean
clean :
	$(RM) $(bin) $(objects)
