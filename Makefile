CFLAGS = -Wall

all: crc32

crc32: main.c
	cc $(CFLAGS) main.c -o crc32

main.c: crc32.c

crc32.c: crc32_table.h
