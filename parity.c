#include "major1.h"  // Include the project header file

// Function to calculate parity using bitwise operations

int compute_parity(unsigned int num) {
	int count = 0;
    
    while (num) {
	    count ^= (num & 1); // XOR count with the least significant bit
		num >>= 1; // Right shift the number to process the next bit
    }
    return count;  // Returns 0 for even parity, 1 for odd parity
}
