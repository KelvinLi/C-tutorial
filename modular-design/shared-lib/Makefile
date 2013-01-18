include config.mk

actions := install clean

.PHONY : $(actions)
$(actions) : % :
	$(MAKE) -C libeasy $@
	$(MAKE) -C libstupid $@
	$(MAKE) -C simple $@
