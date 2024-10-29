/*
 * crc32
 *
 * super simple crc32 calculator written by dch82
 */

#include <stdio.h>
#include "crc32_table.h"

int main(int argc, char *argv[]) {
        int ch;                                 // buffer for the input
        unsigned long crc32 = 0xFFFFFFFFu;      // initialise output
        // the calculation part
        // loop until an EOF is read
        while ((ch = getchar()), ch != EOF) {
                // find the lookup index
                const unsigned long lookup_index = (crc32 ^ ch) & 0xff;
                // calculate the hash for the byte
                crc32 = (crc32 >> 8) ^ crc32_table[lookup_index];
        }
        // invert the hash
        crc32 ^= 0xFFFFFFFFu;
        // print the output
        printf("%lX\n", crc32);
}
