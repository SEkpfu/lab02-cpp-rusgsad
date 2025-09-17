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

    double dist = sqrt (x * x + y * y); // вычисление расстояния от центра координат до точки попадания
    int points; // переменная для обозначения выбитых очков

    if (dist <= 2) {
        points = 10;
    }

    if (dist > 2 && dist <= 4) {
        points = 5;
    }

    if (dist > 4) {
        points = 0;
    }
    cout << "Количество выбитых очков: \n" << points;

    return 0;
}