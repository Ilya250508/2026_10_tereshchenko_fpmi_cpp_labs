#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите четырёхзначное натуральное число: ";
    cin >> n;

    if (n < 1000 || n > 9999) {
        cout << " Число не является четырёхзначным \n";
        return 0;
    }

    int a1 = n / 1000;       
    int a2 = (n / 100) % 10; 
    int a3 = (n/ 10) % 10;  
    int a4 = n % 10;         

    if (a1 == a4 && a2 == a3) {
        cout << "Число " << n << " является палиндромом \n";
    }
    else {
        cout << "Число " << n << " не является палиндромом\n";
    }

    return 0;
}