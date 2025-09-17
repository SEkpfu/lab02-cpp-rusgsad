#include <iostream>
using namespace std;

int main() {
    setlocale (0, "");
    double x, y, z, a, b;
    cout << "Введите размеры кирпича (x, y, z): \n";
    cin >> x >> y >> z;
    cout << "Введите размеры прямоугольного отверстия (a, b)\n";
    cin >> a >> b;

    double s1, s2, s3, s0;
    s0 = a * b;
    s1 = x * y;
    s2 = x * z;
    s3 = y * z;

    if (s0 > s1 || s0 > s2 || s0 > s3) {
        cout << "Кирпич пройдёт :)";
    }
    else {
        cout << "Кирпич не пройдёт :(";
    }
    return 0;
}