bin := simple
objects := main.o

libopts := -leasy
CFLAGS := -I$(PREFIX)/$(PATH_INCLUDE) \
          -Wl,-rpath=../$(PATH_LIB),-L$(PREFIX)/$(PATH_LIB) \
          $(libopts)

$(bin) : $(objects)
	$(CC) $(CFLAGS) -o $(bin) $(objects)

main.o : $(PREFIX)/$(PATH_INCLUDE)

.PHONY : clean
clean :
	$(RM) $(bin) $(objects)

.PHONY : install
install : $(bin)
	install -d $(PREFIX)/$(PATH_BIN)
	install -t $(PREFIX)/$(PATH_BIN) $(bin)
