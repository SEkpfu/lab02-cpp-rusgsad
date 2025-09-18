#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale (LC_ALL, "ru_RU.UTF-8");
    double y, z;
    cout << "y = ";
    cin >> y;

    if (y >= 0 && y <= 3) 
    {
        z = 1.0 + (abs (y + 1.0) / (y + 2.0));
    }
    if (y > 3) 
    {
        z = pow (y, 4) + 1.0;
    }
    if (y < 0) 
    {
        z = sqrt (abs (sin (M_PI * y)));
    }

    cout << "z = " << z;
    return 0;
}
