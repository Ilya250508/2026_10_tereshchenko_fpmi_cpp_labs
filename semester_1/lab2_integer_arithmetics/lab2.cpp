#include <iostream>
#include <cmath>

int main() {
    std::setlocale(LC_ALL, "RU");

    int a, b;
    std::cout << "Введите  a и b: ";
    std::cin >> a >> b;
    if (b <= 1 && b > a) {
        std::cout << "Простых чисел на таком промежутке нет";
    }
    else if (b <= a) {
        std::cout << "a должно быть больше чем b";
    }

    for (int num = a; num <= b; ++num) {

        if (num < 0) {
            continue;
        }

        if (num > 1) {
            int d; 
            for (d = 2; d <= std::sqrt(num); ++d) {
                if (num % d == 0) {
                    break; 
                }
            }

            
            if (d > std::sqrt(num)) {
                int schet;

                for (schet = 0; schet <= 9; ++schet) {
                    int count = 0;

                    for (int t = num; t > 0; t = t / 10) {
                        if (t % 10 == schet) {
                            ++count;
                        }
                    }

                    if (count > 1) {
                        break;
                    }
                }

                
                if (schet == 10) {
                    std::cout << num << " ";
                }
            }
        }
    }

    return 0;
}