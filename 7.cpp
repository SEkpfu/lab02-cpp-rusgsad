#include <iostream>

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a, b;
    std::cout << "Введите два вещественных числа: \n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    char z;
    std::cout << "Введите знак арифмитической операции (+, -, *): ";
    std::cin >> z;

    switch (z) {
        case '+': std::cout << "a + b = " << a + b; break;
        case '-': std::cout << "a - b = " << a - b; break;
        case '*': std::cout << "a * b = " << a * b; break; 
        default: std::cout << "Неверные данные!";
    }
    return 0;
}