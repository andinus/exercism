#include "nucleotide_count.h"
#include <math.h>
#include <stdio.h>

struct DNA {
    size_t a;
    size_t c;
    size_t g;
    size_t t;
};

char *count(const char *dna_strand) {
    struct DNA strand = {0};

    for (size_t idx = 0; dna_strand[idx] != '\0'; idx++) {
        if (dna_strand[idx] == 'A') strand.a++;
        else if (dna_strand[idx] == 'C') strand.c++;
        else if (dna_strand[idx] == 'G') strand.g++;
        else if (dna_strand[idx] == 'T') strand.t++;
        else return calloc(1, sizeof(char)); // Invalid strand.
    }

    unsigned int str_size = 1 + snprintf(NULL, 0, "A:%zu C:%zu G:%zu T:%zu",
                                         strand.a, strand.c, strand.g, strand.t);
    char *strand_count = calloc(str_size, sizeof(char));
    snprintf(strand_count, str_size, "A:%zu C:%zu G:%zu T:%zu",
             strand.a, strand.c, strand.g, strand.t);

    return strand_count;
}
