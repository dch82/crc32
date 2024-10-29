#include <stdio.h>
#include <string.h>
#include "crc32.c"

int main(int argc, char *argv[]) {
        char input[] = "Hello";
        unsigned long output = crc32(input, strlen(input));
        printf("%lx\n", output);
}
