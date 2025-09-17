#include <iostream>

int main () {
    int a;
    char plus, minus, nul;
    
    std::cout << "Vvedite zeloe chislo: \n";
    std::cin >> a;

    if (a > 0) {
        std::cout << "Chislo polozhitelno: \n" << a;
    }
    else {
        if (a < 0) {
            std::cout << "Chislo otrizatelno: \n" << a;
        }
        else {
            std::cout << "Nol: \n" << a;
        }
    }

    return 0;
}