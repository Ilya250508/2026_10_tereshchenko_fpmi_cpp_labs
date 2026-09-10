#include <iostream>
using namespace std;

int main() {
    std::setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите шестизначное число: ";
    cin >> n;

    if (n < 100000 || n > 999999) {
        cout << "Это не шестизначиное число \n";
        return 0;
    }

    int a6 = n % 10;          
    int a5 = (n / 10) % 10;   
    int a4 = (n / 100) % 10;  
    int a3 = (n / 1000) % 10; 
    int a2 = (n / 10000) % 10;
    int a1 = n / 100000;      

    int sum1 = a1 + a2 + a3; 
    int sum2 = a4 + a5 + a6; 

    if (sum1 == sum2) {
        cout << "Число " << n << " является счастливым\n";
    }
    else {
        cout << "Число " << n << " не является счастливым\n";
    }

    return 0;
}