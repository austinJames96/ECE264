CC	= gcc
CFLAGS	= -I../include
LDLIBS	= -lrx32	
LDFLAGS = -L../lib

all: dbl-test1 dbl-print dbl-init dbl_functions
	gcc -o all dbl-test1.o dbl-print.o dbl-init.o dbl_functions.o
	
dbl-test1: dbl-test1.o dbl-print.o dbl-init.o dbl_functions.o
	gcc -c dbl-test1.c

dbl-print:
	gcc -c dbl-print.c
	
dbl-init:
	gcc -c dbl-init.c
	
dbl_functions:
	gcc -c dbl_functions.c

clean:
	$(RM) dbl-test1.o	dbl-test1.c 
	$(RM) dbl-print.o	dbl-print.c
	$(RM) dbl-init.o		dbl-init.c 
	$(RM) dbl_functions.o	dbl_functions.c

cleanall: clean
	$(RM) all
	$(RM) dbl-test1.o	dbl-test1.c 
	$(RM) dbl-print.o	dbl-print.c
	$(RM) dbl-init.o		dbl-init.c 
	$(RM) dbl_functions.o	dbl_functions.c
