#include <iostream>
#include <cmath>
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
        cout << "Треугольник существует \n";
        
        if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x)) {
            cout << "Треугольник равнобедренный";
        } 
        if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x) {
            cout << "Треугольник прямоугольный";
        }
        if (x == y && x == z && y == z) {
            cout << "Треугольник равносторонний";
        }

    }
    else {
        cout << "Треугольник не существует";
    }
    return 0;
}