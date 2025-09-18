#include <iostream> 
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int n, k;
    cout << "Введите направление робота: \n" << "1 - север; " << "2 - юг; " << "3 - запад; " << "4 - восток; \n";
    cin >> n;
    cout << "Введите команду для робота: \n" << "0 - поворот налево; 1 - поворот направо; 2 - вперёд \n";
    cin >> k;

    string result;

    switch (n) {
        case 1: { 
            switch (k) {
                case 0: result = "запад"; break;
                case 1: result = "восток"; break;
                case 2: result = "север"; break;
                default: result = "ОШИБКА!!!";
            } 
        } break;
        case 2: {
            switch (k) {
                case 0: result = "восток"; break;
                case 1: result = "запад"; break;
                case 2: result = "юг"; break;
                default: result = "ОШИБКА!!!";
            } 
        } break;
        case 3: {
            switch (k) {
                case 0: result = "юг"; break;
                case 1: result = "север"; break;
                case 2: result = "запад"; break;
                default: result = "ОШИБКА!!!";
            }
        } break;
        case 4: {
            switch (k) {
                case 0: result = "север"; break;
                case 1: result = "юг"; break;
                case 2: result = "восток"; break;
                default: result = "ОШИБКА!!!";
            }
        } break;
        default: result = "ОШИБКА!!!";
    }

    cout << "После выполнения команды робот будет направлен на " << result;

    return 0;
}