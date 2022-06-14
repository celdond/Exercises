#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {

    if (candidate < 10) {
        return true;
    }

    int digit_count = log10(candidate) + 1;
    int iter = digit_count, total = 0, d = candidate;

    for (; iter > 0; iter--) {

        total += pow(d % 10, digit_count);
        d /= 10;
    }
      
    if (total != candidate) {
        return false;
    }
    return true;      
}