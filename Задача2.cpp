// Дан номер масти m (1<m<4), определить название масти. Масти нумеруются: "пики"-1, "трефы"-2, "бубны"-3, "червы"-4.
#include <iostream>
using namespace std;

int main() 
{
    int m;
    
    cout << "Введите номер масти (1-4): ";
    cin >> m;
    
    switch (m)
    {
        case 1: cout << "пики" << endl; break;
        case 2: cout << "трефы" << endl; break;
        case 3: cout << "бубны" << endl; break;
        case 4: cout << "червы" << endl; break;
        default: cout << "Ошибка: номер масти должен быть от 1 до 4" << endl;
    }
    
    return 0;
}
