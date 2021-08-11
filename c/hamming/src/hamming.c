#include <stdlib.h>
#include "hamming.h"

size_t compute(const char *lhs, const char *rhs) {
    size_t diff = 0;
    for (size_t idx = 0; ; idx++) {
        short res = (lhs[idx] == '\0') + (rhs[idx] == '\0');
        if (res == 1) return -1;
        if (res == 2) return diff;
        if (lhs[idx] != rhs[idx]) diff++;
    }
}
