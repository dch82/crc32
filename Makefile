CFLAGS = -Wall

all: crc32

crc32: crc32.c
	$(CC) $(CFLAGS) crc32.c -o crc32

clean:
	rm crc32

run:
	./crc32
