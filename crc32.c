#include "crc32_table.h"

unsigned long crc32(const unsigned char *input[], size_t input_size) {
        /* Initialise CRC-32 to starting value */
        unsigned long crc32 = 0xFFFFFFFF;
        /* Cyclic part */
        for (size_t i = 0; i < input_size; i++) {
                const unsigned long lookup_index = (crc32 ^ input[i]) & 0xff;
                crc32 = (crc32 >> 8) ^ crc32_table[lookup_index];
        }

        /* Invert all the bits */
        crc32 ^= 0xFFFFFFFF;
        return crc32;
}
