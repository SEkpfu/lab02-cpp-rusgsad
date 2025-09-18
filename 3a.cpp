#include <iostream>

int main() {
    double x, f;

    std::cout << "Введите значение X = \n";
    std::cin >> x;

    if (x <= -2) {
        f = 0;
    }
    else {
        if (x <= 10) {
            f = x * x + 4 * x + 5;
        }
        else {
            f = 1 / (x * x + 4 * x - 5);
        }
    }

    std::cout << "f(x) = " << f;

    return 0;
}