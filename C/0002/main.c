#include "armstrong_numbers.h"
#include <math.h>

// version 1
/*
bool is_armstrong_number(int candidate) {
    int digits = 0;
    int temp = candidate;
    
    while (temp > 0) {
        temp = (int)(temp / 10);
        digits++;
    }

    int armstrong = 0;
    int remainder = candidate;
    while (remainder > 0) {
        int d = remainder % 10;
        armstrong += pow(d, digits);
        remainder = (int)(remainder / 10);
    }

    return (armstrong == candidate);
}
 */

// version 2 = i learned you can get the number digits with log10
bool is_armstrong_number(int candidate) {
    int temp = candidate;
    int sum = 0;
    int digits = (int)log10(temp) + 1;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == candidate);
}
