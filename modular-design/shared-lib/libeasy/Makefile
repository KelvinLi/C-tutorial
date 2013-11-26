lib := libeasy.so
objects := conflict.o libeasy.o util.o
CFLAGS += -fPIC -fvisibility=hidden

$(lib) : $(objects)
	$(LD) -shared -soname $(lib) -o $(lib) $(objects)

conflict.o : conflict.h
libeasy.o : conflict.h libeasy.h

.PHONY : clean
clean :
	$(RM) $(lib) $(objects)

.PHONY : install
install : $(lib)
	install -d $(PREFIX)/$(PATH_LIB)
	install -d $(PREFIX)/$(PATH_INCLUDE)
	install -m 644 -t $(PREFIX)/$(PATH_LIB) $(lib)
	install -m 644 -t $(PREFIX)/$(PATH_INCLUDE) libeasy.h
