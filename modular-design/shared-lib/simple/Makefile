bin := simple
objects := main.o

CFLAGS += -I$(PREFIX)/$(PATH_INCLUDE)
ldflags := -Wl,--library-path=$(PREFIX)/$(PATH_LIB) -lstupid -leasy

$(bin) : $(objects)
	$(CC) $(ldflags) -o $(bin) $(objects)

main.o : $(PREFIX)/$(PATH_INCLUDE)

.PHONY : clean
clean :
	$(RM) $(bin) $(objects)

.PHONY : install
install : $(bin)
	install -d $(PREFIX)/$(PATH_BIN)
	install -d $(PREFIX)/$(PATH_LIB)
	install -t $(PREFIX)/$(PATH_LIB) $(bin)
	install -t $(PREFIX)/$(PATH_BIN) runsimple
