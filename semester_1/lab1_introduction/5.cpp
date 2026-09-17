#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n: ";
    cin >> n;

    int f0 = 0, f1 = 1;

    if (n >= 1) cout << f0 << " ";
    if (n >= 2) cout << f1 << " ";

    for (int i = 3; i <= n; ++i) {
        int d = f0 + f1;
        cout << d << " ";

        f0 = f1;
        f1 = d;
    }

    return 0;
}