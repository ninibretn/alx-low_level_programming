#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return:numbers converrted
 */
unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }
    
    unsigned int decimal_value = 0;
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') {
            decimal_value = decimal_value * 2;
        }
        else if (b[i] == '1') {
            decimal_value = decimal_value * 2 + 1;
        }
        else {
            return 0;
        }
    }

    return decimal_value;
}
