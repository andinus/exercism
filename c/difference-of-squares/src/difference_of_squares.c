#include "difference_of_squares.h"
#include <math.h>

/*
   Returns the sum of squares upto nth Natural number.

   The difference in squares increases by a incrementing (by 2) step.

   Sequence:
   1 4 9 16 25 36 49 64 81 100

   4 - 1 = 3
   9 - 4 = 5    (3 + 2 = 5)
   16 - 9 = 7   (5 + 2 = 7)

   step is our incrementing step, we increment it by 2 in every
   iteration and add it to previous square to get the current term.
*/
unsigned int sum_of_squares(unsigned int number) {
    unsigned int sum = 1;
    unsigned int step = 1;
    unsigned int prev_sq = 1;
    for (; number > 1; number--) {
        step += 2;
        prev_sq += step;
        sum += prev_sq;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int sum = 0;
    for (; number > 0; number--)
        sum += number;
    return pow(sum, 2);
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
