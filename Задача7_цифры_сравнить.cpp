#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите двухзначное число: ";
    cin >> n;

    int first = n / 10;   // десятки
    int second = n % 10;  // единицы

    if (first > second)
        cout << "Первая цифра больше";
    else if (second > first)
        cout << "Вторая цифра больше";
    else
        cout << "Цифры равны";

    return 0;
}