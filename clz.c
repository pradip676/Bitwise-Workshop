#include "major1.h"

int countLeadingZeros(unsigned int num) {
    //if the numer is 0, all 32 bits are 0
    if (num == 0) return 32;  // for edge case handling

    int count = 0; // Count the number of leading zeroes
    unsigned int mask = 1u << 31; //most significant bit mask (i.e. bit 31)

    // Loop until the set bit is found
    while ((num & mask) == 0) {
        count++;
        mask >>= 1; 
    }

    // Return the total count of leading zeroes
    return count; 
}
