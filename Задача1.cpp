// Составить программу, которая выдает одно из сообщений «Да», «Нет», «На границе» в зависимости от того, лежит ли точка внутри заштрихованной области, вне заштрихованной области или на ее границе.
#include <iostream>
#include <cmath>
using namespace std;


string checkPoint(double x, double y) 
{
    double distance = sqrt(x*x + y*y);
    
    if(distance < 3) 
    {
        return "Нет"; 
    }
    if(distance > 7) 
    {
        return "Нет"; 
    }
    if(abs(distance - 3) <= 1e-6 || abs(distance - 7) <= 1e-6) 
    {
        return "На границе"; 
    }
    return "Да"; 
}

int main() 
{
    double x, y;
    
    cout << "Введите координату x: ";
    cin >> x;
    
    cout << "Введите координату y: ";
    cin >> y;
    
    string result = checkPoint(x, y);
    cout << "Точка (" << x << ", " << y << ") находится: " << result << endl;
    
    return 0;
}
