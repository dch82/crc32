/*
 * crc32
 *
 * super simple crc32 calculator written by dch82
 *
 * usage: pass the data to be hashed through stdin, the hash is outputed through
 * stdout.
 *
 * this work belongs in the public domain: do whatever you want with it.
 */

#include <stdio.h>
#include "crc32_table.h"

int main(int argc, char *argv[]) {
        int ch;                                 // buffer for the input
        unsigned long crc32 = 0xFFFFFFFFu;      // initialise output

        // stop hashing when there is nothing left to hash
        while (scanf("%d", &ch) != EOF) {
                // Get the current byte
                ch = getchar();
                // Find the lookup index
                const unsigned long lookup_index = (crc32 ^ ch) & 0xff;
                // Calculate the hash for the byte
                crc32 = (crc32 >> 8) ^ crc32_table[lookup_index];
        }
        // Invert the hash
        crc32 ^= 0xFFFFFFFFu;
        // Print the output
        printf("%lx\n", crc32);
}
