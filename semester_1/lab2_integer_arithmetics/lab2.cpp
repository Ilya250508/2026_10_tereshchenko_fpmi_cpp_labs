#include <iostream>
#include "MyFunctions.h"

int main() {
    std::setlocale(LC_ALL, "RU");

    int a, b;
    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    if (b <= 1 && b > a) {
        std::cout << "Простых чисел на таком промежутке нет";
    }
    else if (b <= a) {
        std::cout << "b должно быть больше чем a";
    }

    for (int num = a; num <= b; ++num) {
        if (num < 0) continue;
   
        if (isPrime(num) && UniqueDigits(num)) {
            std::cout << num << " ";
        }
    }

    return 0;
}}