#include "major1.h"

unsigned int endianSwap(unsigned int num) {
    
    unsigned int byte0 = (num & 0x000000FF) << 24;  
    unsigned int byte1 = (num & 0x0000FF00) << 8;   
    unsigned int byte2 = (num & 0x00FF0000) >> 8;   
    unsigned int byte3 = (num & 0xFF000000) >> 24;  
    
    
    return byte0 | byte1 | byte2 | byte3;
}
