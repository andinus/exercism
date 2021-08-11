#include "acronym.h"
#include <ctype.h>
#include <stdlib.h>

char *abbreviate(const char *phrase) {
    if (phrase == NULL) return NULL;
    if (phrase[0] == '\0') return NULL;

    size_t pos = 0;
    char *acronym = malloc(1 * sizeof(char));

    if (isalpha(phrase[0]))
        acronym[pos++] = toupper((unsigned char) phrase[0]);

    for (size_t idx = 0; phrase[idx] != '\0'; idx++)
        if (phrase[idx] == ' ' || phrase[idx] == '-' || phrase[idx] == '_')
            if (phrase[idx + 1] != '\0' && isalpha(phrase[idx + 1])) {
                acronym = realloc(acronym, (pos + 1) * sizeof(char));
                acronym[pos++] = toupper((unsigned char) phrase[idx + 1]);
            }

    acronym = realloc(acronym, (pos + 1) * sizeof(char));
    acronym[pos] = '\0';

    return acronym;
}
