#include <iostream>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int bd_d, bd_m, bd_y;
    cout << "Введите дату своего рождения: \n";
    cout << "День - ";
    cin >> bd_d;
    cout << "Месяц (1-12) - ";
    cin >> bd_m;
    cout << "Год - ";
    cin >> bd_y;

    int td_d, td_m, td_y;
    cout << "Введите текущую дату: \n";
    cout << "День - ";
    cin >> td_d;
    cout << "Месяц (1-12) - ";
    cin >> td_m;
    cout << "Год - ";
    cin >> td_y;

    int age = td_y - bd_y;
    if (td_m < bd_m) {
        age = age - 1;
    }
    if (td_m == bd_m) {
        if (td_d < bd_d) {
            age = age - 1;
        }
    }
    
    string age_name;
    if (age % 100 >= 10 && age % 100 <= 14) {
        age_name = "лет";
    }
    
    switch (age % 10) {
        case 1: age_name = "год"; break;
        case 2:
        case 3:
        case 4: age_name = "года"; break;
        default: age_name = "лет"; 
    }
    
    cout << "Вам " << age << " " << age_name;
    
    return 0;
}