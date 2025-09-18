#include <iostream>

int main () {
    int a;
    char plus, minus, nul;
    
    std::cout << "Vvedite zeloe chislo: \n";
    std::cin >> a;

    if (a % 2 == 0) {
        std::cout << "Chislo chetnoe: \n" << a;
    }
    else {
            std::cout << "Chislo nechetnoe: \n" << a;
    }

    return 0;
}