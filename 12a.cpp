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

    if (a > 10) {
        sum = a;
        if (b > 10) {
            sum = a + b;
        }
        if (c > 10) {
            sum = a + c;
        }   
        if (b > 10 && c > 10) {
            sum = a + b + c;
        }
    }

    if (b > 10) {
        sum = b;
        if (c > 10) {
        sum = b + c;
        }
        if (a > 10) {
            sum = b + a;
        }
        if (a > 10 && c > 10) {
            sum = a + b + c;
        }
    }

    if (c > 10) {
        sum = c;
        if (a > 10) {
        sum = a + c;
        }
        if (b > 10) { 
            sum = c + b;
        }
        if (a > 10 && b > 10) {
            sum = a + b + c;
        }
    }

    cout << "Сумма чисел, больших 10: \n" << sum;

    return 0;
}