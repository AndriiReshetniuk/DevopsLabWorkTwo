AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = Calculation
Calculation_SOURCES = main.cpp Calculation.cpp Calculation.h
dist_man_MANS = Calculation.1
dist_pkgdata_DATA = data.txt
CTRLF_DIR=$(CURDIR)/deb/DEBIAN
CTRLF_NAME = $(CTRLF_DIR)/control
.PHONY: deb debug
deb:
	make DESTDIR=$(CURDIR)/deb install
	mkdir -p $(CTRLF_DIR)	
	echo Package: $(PACKAGE_NAME) > $(CTRLF_NAME)
	echo Version: $(VERSION) >> $(CTRLF_NAME)
	echo Architecture: all >> $(CTRLF_NAME)
	echo Maintainer: $(PACKAGE_BUGREPORT) >> $(CTRLF_NAME)
	echo -n "Description:" >>  $(CTRLF_NAME)
	cat Calculation.1 >> $(CTRLF_NAME)
	make DESTDIR=$(CURDIR)/deb install
 
debug:
	$(foreach v, $(.VARIABLES), $(info $(v)= $($(v))))

