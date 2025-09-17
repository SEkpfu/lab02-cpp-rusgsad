#include <iostream>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int a, b, c, sum;
    cout << "Введите три целых числа \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int even = 0; // переменная для обозначения количества четных чисел, изначально = 0;

    switch (a % 2) {
        case 0: even = even + 1; break;
    }

    switch (b % 2) {
        case 0: even = even + 1; break;
    }

    switch (c % 2) {
        case 0: even = even + 1; break;
    }

    cout << "Количество четных чисел = "  << even;
    
    return 0;
}