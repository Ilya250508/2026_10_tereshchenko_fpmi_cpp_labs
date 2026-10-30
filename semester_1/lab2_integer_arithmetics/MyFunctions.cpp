#include "MyFunctions.h"
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int d = 2; d <= std::sqrt(num); ++d) {
        if (num % d == 0) return false;
    }
    return true;
}

bool UniqueDigits(int num) {
    if (num < 0) return false;
    if (num == 0) return true;

    for (int schet = 0; schet <= 9; ++schet) {
        int count = 0;
        for (int t = num; t > 0; t = t / 10) {
            if (t % 10 == schet) {
                ++count;
            }
        }
        if (count > 1) {
            return false; 
        }
    }
    return true; 
}