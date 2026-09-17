#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    using std::cout;
    using std::cin;
    long long int b, d, a;
    cout << "Введите начало и конец отрезка ";
    cin >> a >> b ;
    cout << "Введите разность прогрессии ";
    cin >> d;



    for (long long int i = a; i <= b; i += d)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}