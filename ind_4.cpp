#include <iostream> 
using namespace std;

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    int dollars;
    cout << "Количество долларов: \n";
    cin >> dollars;

    string result;

    switch (dollars % 10)
    {
        case 1: result = "доллар"; break;
        case 2: 
        case 3:
        case 4: result = "доллара"; break;
        default: result = "долларов";
    }
    if (dollars % 100 > 10 && dollars % 100 < 15) 
    {
        result = "долларов";
    }

    cout << "Билли заработал " << dollars << " " << result;

    return 0;
}
