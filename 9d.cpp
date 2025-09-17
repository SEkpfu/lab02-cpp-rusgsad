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
    double f = -2 * x + 2;
    double dist_f = sqrt (x * x + f * f);

    if (y >= 0 && x >= 0) {
        if (dist <= dist_f) {
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