#include "major1.h"

unsigned int rotateRight(unsigned int num, int shift) {
    if (shift==0) return num; //no shift for 0
    return (num >> shift) | (num << (32 - shift));
}
