#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y;
    cout << "Координаты попадания: \n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    if ((x <= 0 && x >= -2) && (y >= 0 && y <= 1)) {
        cout << "Точка входит в заштрихованную область";
    }
    else {
        cout << "Точка не входит в заштриххованную область";
    }
    return 0;
}