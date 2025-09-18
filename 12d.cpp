#include <iostream>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int a, b, c;
    cout << "Введите три целых числа \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int n_min; // переменная для обозначения номера наименьшего числа
    int dmin = min (min (a, b), c);

    if (a == dmin) {
        n_min = 1;
    }
    if (b == dmin) {
        n_min = 2;
    }
    if (c == dmin) {
        n_min = 3;
    }

    cout << "Номер наименьшего числа: " << n_min;

    return 0;
}