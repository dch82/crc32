all: crc32
crc32: main.c
	cc main.c -o crc32 -Werror

main.c: crc32.c

crc32.c: crc32_table.h
