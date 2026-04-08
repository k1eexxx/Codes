// Составить программу, которая выдает одно из сообщений «Да», «Нет», «На границе» в зависимости от того, лежит ли точка внутри заштрихованной области, вне заштрихованной области или на ее границе.
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x, y;
    
    cout << "Введите координату x: ";
    cin >> x;
    
    cout << "Введите координату y: ";
    cin >> y;

    double distance = sqrt(x*x + y*y);

    if (abs(distance - 3) <= 1e-6 || abs(distance - 7) <= 1e-6) 
    {
        cout << "На границе";
    }
    else if (distance > 3 && distance < 7) 
    {
        cout << "Да";
    }
    else 
    {
        cout << "Нет";
    }

    return 0;
}
