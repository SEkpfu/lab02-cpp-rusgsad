#include <iostream>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double x, y, z;
    cout << "Введите длины сторон треугольника \n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;

    if ((x + y) > z && (x + z) > y && (y + z) > x) {
        cout << "Треугольник существует";
    }
    else {
        cout << "Треугольник не существует";
    }
    return 0;
}