CC=gcc
CFLAGS=-I.
DEPS = hellomake.h

#gcc -c -o hellomake.o hellomake.c -I.
#gcc -c -o hellofunc.o hellofunc.o -I.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

#gcc -o hellomake hellomake.o hellofunc.o
hellomake: hellomake.o hellofunc.o
	$(CC) -o hellomake hellomake.o hellofunc.o
