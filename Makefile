CC=gcc
CFLAGS=-Wall

all: sumaprod

sumaprod: sumaprod.c
	$(CC) $(CFLAGS) -o sumaprod sumaprod.c

clean:
	rm -f sumaprod
