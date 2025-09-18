#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main () {
    setlocale (0, "");
    double a, b, r, z, c;
    std::cout << "Введите длины сторон коробки: \n";
    std::cin >> a >> b;
    std::cout << "Введите радиус торта: \n";
    std::cin >> r;
    std::cout << "Введите высоту коробки: \n";
    std::cin >> c;
    std::cout << "Введите высоту торта: \n";
    std::cin >> z;
    
    double sK, sT;
    sK = a * b;
    sT = M_PI * pow (r, 2);
    
    if (sK < sT) {
        std::cout << "Торт не поместится (площадь коробки меньше площади торта)";
    }
    else {
        if (c < z) {
            std::cout << "Торт не поместится (высота коробки меньше высоты торта)";
        }
        else {
            std::cout << "Торт поместится";
        }
    }
    return 0;
}