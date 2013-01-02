bin := libeasy.so
objects := square.o util.o
CFLAGS := -fPIC

$(bin) : $(objects)
	$(CC) -shared -Wl,-soname,$(bin) -o $(bin) $(objects) -lc

square.o : libeasy.h

.PHONY : clean
clean :
	$(RM) $(bin) $(objects)

.PHONY : install
install : $(bin)
	install -d $(PREFIX)/$(PATH_LIB)
	install -d $(PREFIX)/$(PATH_INCLUDE)
	install -t $(PREFIX)/$(PATH_LIB) $(bin)
	install -t $(PREFIX)/$(PATH_INCLUDE) libeasy.h
