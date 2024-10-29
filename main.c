#include <stdio.h>
#include "crc32_table.h"

int main(int argc, char *argv[]) {
        int ch;        // buffer
        unsigned long crc32 = 0xFFFFFFFFu;

        while (scanf("%d", &ch) != EOF) {
                ch = getchar();
                const unsigned long lookup_index = (crc32 ^ ch) & 0xff;
                crc32 = (crc32 >> 8) ^ crc32_table[lookup_index];
        }
        printf("%lx\n", crc32 ^= 0xFFFFFFFFu);
}
