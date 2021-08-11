#include "isogram.h"
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) return false;

    bool seen[26] = {0};
    for (size_t idx = 0; phrase[idx] != '\0'; idx++) {
        unsigned char cur = tolower((unsigned char) phrase[idx]);
        if ('a' <= cur & cur <= 'z') {
            size_t s_idx =  cur - 'a';

            if (seen[s_idx]) return false;
            else seen[s_idx] = true;
        }
    }
    return true;
}
