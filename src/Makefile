libdir=$(prefix)/lib

CPPFLAGS=-Wall -g -fPIC
CPP=g++

ECCLESANDKING1969_SRC=ecclesandking1969.C
ECCLESANDKING1969_OBJ=$(ECCLESANDKING1969_SRC:.C=.o)

build: libEcclesandking1969.a libEcclesandking1969.so

libEcclesandking1969.a: $(ECCLESANDKING1969_OBJ)
	ar rc $@ $^

libEcclesandking1969.so: $(ECCLESANDKING1969_OBJ)
	$(CPP) -shared -Wl,-soname,$@ -o $@ $^

install: $(libdir)/libEcclesandking1969.a $(libdir)/libEcclesandking1969.so

$(libdir)/libEcclesandking1969.a $(libdir)/libEcclesandking1969.so: libEcclesandking1969.a libEcclesandking1969.so
	cp libEcclesandking1969.a libEcclesandking1969.so $(libdir)

uninstall:
	- rm -f $(libdir)/libEcclesandking1969.a $(libdir)/libEcclesandking1969.so

clean:
	- rm -f libEcclesandking1969.a libEcclesandking1969.so $(ECCLESANDKING1969_OBJ)
