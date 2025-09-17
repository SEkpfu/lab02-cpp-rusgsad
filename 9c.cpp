#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y;
    cout << "Координаты попадания: \n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    double dist = sqrt (x * x + y * y);

    if (x >= 0) {
        if (dist >= 3 && dist <= 6) {
            cout << "Точка принадлежит заштрихованной области";
        }
        else {
            cout << "Точка не принадлежит заштрихованной области";
        }
    }
    else { 
        cout << "Точка не принадлежит заштрихованной области";
    }

    return 0;
}