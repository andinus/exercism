#include "pangram.h"
#include <ctype.h>
#include <string.h>

bool is_pangram(const char *sentence) {
    if (sentence == NULL) return false;

    bool seen[26] = {0};
    for (size_t idx = 0; sentence[idx] != '\0'; idx++) {
        unsigned char cur = tolower((unsigned char) sentence[idx]);
        if ('a' <= cur & cur <= 'z') seen[cur - 'a'] = true;
    }

    for (short idx = 0; idx < 26; idx++)
        if (!seen[idx]) return false;
    return true;
}
