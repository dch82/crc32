CFLAGS = -Wall

all: crc32

crc32: main.c crc32_table.h
	cc $(CFLAGS) main.c -o crc32
