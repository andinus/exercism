#include "space_age.h"

#define EARTH_YEAR_IN_SECONDS 31557600

#define MERCURY_YEAR_IN_EARTH_YEARS 0.2408467f
#define VENUS_YEAR_IN_EARTH_YEARS 0.61519726f
#define EARTH_YEAR_IN_EARTH_YEARS 1.0f
#define MARS_YEAR_IN_EARTH_YEARS 1.8808158f
#define JUPITER_YEAR_IN_EARTH_YEARS 11.862615f
#define SATURN_YEAR_IN_EARTH_YEARS 29.447498f
#define URANUS_YEAR_IN_EARTH_YEARS 84.016846f
#define NEPTUNE_YEAR_IN_EARTH_YEARS 164.79132f

float age(planet_t planet, int64_t seconds) {
    switch (planet) {
    case MERCURY:
        return seconds / (MERCURY_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case VENUS:
        return seconds / (VENUS_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case EARTH:
        return seconds / (EARTH_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case MARS:
        return seconds / (MARS_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case JUPITER:
        return seconds / (JUPITER_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case SATURN:
        return seconds / (SATURN_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case URANUS:
        return seconds / (URANUS_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    case NEPTUNE:
        return seconds / (NEPTUNE_YEAR_IN_EARTH_YEARS * EARTH_YEAR_IN_SECONDS);
    default:
        return -1;
    }
}
