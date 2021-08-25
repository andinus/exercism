#include "sum_of_multiples.h"
#include <stdlib.h>
#include <stdbool.h>

unsigned int sum(const unsigned int *factors,
                 const size_t number_of_factors, const unsigned int limit) {
    unsigned int total = 0;
    bool *seen = calloc(limit, sizeof(*seen));
    for (size_t idx = 0; idx < number_of_factors; idx++)
        for (size_t num = 0; num < limit; num++)
            // factors[idx] shouldn't be 0. (% fails)
            if (!seen[num] && factors[idx] && !(num % factors[idx])) {
                total += num;
                seen[num] = true;
            }
    return total;
}
