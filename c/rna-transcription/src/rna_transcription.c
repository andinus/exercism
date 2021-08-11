#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna) {
    size_t len = strlen(dna);
    char *rna = calloc(len + 1, sizeof(*rna));
    for (size_t idx = 0; idx < len; idx++)
        switch (dna[idx]) {
        case 'G': rna[idx] = 'C'; break;
        case 'C': rna[idx] = 'G'; break;
        case 'T': rna[idx] = 'A'; break;
        case 'A': rna[idx] = 'U'; break;
        }
    return rna;
}
