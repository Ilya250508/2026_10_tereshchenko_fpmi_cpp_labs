#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int N;
    cout << "Введите количество нечётных чисел : ";
    cin >> N;

    if (N <= 0) {
        cout << "Число должно быть больше 0 \n";
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < 2 * N; i += 2) {
        sum += i;
    }

    cout << "Сумма первых " << N << " нечётных чисел равна: " << sum << "\n";

    return 0;
}