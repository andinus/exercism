#include "difference_of_squares.h"
#include <math.h>

// Returns the sum of squares upto nth Natural number.
unsigned int sum_of_squares(unsigned int number) {
    return (number * (number + 1) * (2 * number + 1)) / 6;
}

// Returns the square of sum upto nth Natural number.
unsigned int square_of_sum(unsigned int number) {
    return pow((number * (1 + number)) / 2, 2);
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
