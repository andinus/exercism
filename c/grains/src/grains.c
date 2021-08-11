#include "grains.h"

uint64_t square(uint8_t index) {
    if (0 < index && index <= 64)
        return 1ULL << (index - 1);
    return 0;
}
uint64_t total(void) {
    return ((1ULL << 63) << 1) - 1;
}
