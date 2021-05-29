CC=gcc
CFLAGS=-O2 -Wall
IF=main.c
OF=TIVF-Viewer

all:
	$(CC) $(CFLAGS) $(IF) -o $(OF)

install: all
	cp $(OF) /usr/bin

uninstall: all
	rm $(OF) /usr/bin
