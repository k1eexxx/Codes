// Дан номер масти m (1<=m<=4), определить название масти. Масти нумеруются: "пики"-1, "трефы"-2, "бубны"-3, "червы"-4.
#include <iostream>
using namespace std;

int main() 
{
    int m;
    cout << "Введите номер масти (1-4): ";
    cin >> m;

    switch (m)
    {
        case 1: cout << "пики"; break;
        case 2: cout << "трефы"; break;
        case 3: cout << "бубны"; break;
        case 4: cout << "червы"; break;
        default: cout << "Ошибка";
    }

    return 0;
}
