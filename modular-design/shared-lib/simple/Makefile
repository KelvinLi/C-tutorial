bin := simple
objects := main.o

CFLAGS := -Wl,-rpath=../$(PATH_LIB),-L$(PREFIX)/$(PATH_LIB),-leasy \
          -I$(PREFIX)/$(PATH_INCLUDE)

$(bin) : $(objects)
	$(CC) $(CFLAGS) -o $(bin) $(objects)

.PHONY : clean
clean :
	$(RM) $(bin) $(objects)

.PHONY : install
install : $(bin)
	install -d $(PREFIX)/$(PATH_BIN)
	install -t $(PREFIX)/$(PATH_BIN) $(bin)
