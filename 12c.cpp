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

    int dmax = max (max (a, b), c);
    int dmin = min (min (a, b), c);
    int average;

    if ((dmax == a && dmin == b) || (dmax == b && dmin == a)) {
        average = c;
    }

    if ((b == dmax && c == dmin) || (b == dmin && c == dmax)) {
        average = a;
    }

    if ((a == dmax && c == dmin) || (a == dmin && c == dmax)) {
        average = b;
    }

    cout << "Среднее из этих чисел = " << average;

    return 0;
}