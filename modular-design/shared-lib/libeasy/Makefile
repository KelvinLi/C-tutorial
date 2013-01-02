lib := libeasy.so
objects := square.o util.o
CFLAGS := -fPIC

$(lib) : $(objects)
	$(CC) -shared -Wl,-soname,$(lib) -o $(lib) $(objects) -lc

square.o : libeasy.h

.PHONY : clean
clean :
	$(RM) $(lib) $(objects)

.PHONY : install
install : $(lib)
	install -d $(PREFIX)/$(PATH_LIB)
	install -d $(PREFIX)/$(PATH_INCLUDE)
	install -m 644 -t $(PREFIX)/$(PATH_LIB) $(lib)
	install -m 644 -t $(PREFIX)/$(PATH_INCLUDE) libeasy.h
