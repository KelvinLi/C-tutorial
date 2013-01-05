lib := libstupid.so
objects := average.o conflict.o util.o
CFLAGS := -fPIC -fvisibility=hidden

$(lib) : $(objects)
	$(CC) -shared -Wl,-soname,$(lib) -o $(lib) $(objects) -lc

average.o : conflict.h libstupid.h
conflict.o : conflict.h

.PHONY : clean
clean :
	$(RM) $(lib) $(objects)

.PHONY : install
install : $(lib)
	install -d $(PREFIX)/$(PATH_LIB)
	install -d $(PREFIX)/$(PATH_INCLUDE)
	install -m 644 -t $(PREFIX)/$(PATH_LIB) $(lib)
	install -m 644 -t $(PREFIX)/$(PATH_INCLUDE) libstupid.h
