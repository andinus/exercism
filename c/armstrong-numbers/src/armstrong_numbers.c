#include <math.h>
#include "armstrong_numbers.h"

bool is_armstrong_number(unsigned int num) {
    // log10(0) returns `HUGE_VAL' or `-∞'.
    if (!num) return true;

    unsigned short len = log10(num) + 1;
    unsigned int arms = 0, num_cp = num;

    for (; num != 0; num /= 10) {
        unsigned short rem = num % 10;
        arms += pow(rem, len);
    }

    return num_cp == arms;
}
