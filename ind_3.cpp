#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y;
    cout << "Координаты точки: \n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    string complete = "Точка попала в заштрихованную область";
    string lose = "Точка НЕ попала в заштрихованную область";

    if (x >= 0) {
        if ((y >= 0 && y <= -x + 6.0) || (y < 0 && x * x + y * y <= 36 && y >= -3)) {
            cout << complete;
        }
        else {
            cout << lose;
        }
    }

    if (x < 0) {
        if ((y >= 0 && y <= x + 6) || (y < 0 && x * x + y * y <= 36)) {
            cout << complete;
        }
        else {
            cout << lose;
        }
    }

    return 0;
}