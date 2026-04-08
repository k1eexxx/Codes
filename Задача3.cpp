// for
#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    
    cout << "Введите A и B (A <= B): ";
    cin >> A >> B;
    
    cout << "Числа, кратные трём (for): ";
    for (int i = A; i <= B; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}

//While
#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    
    cout << "Введите диапозон чисел от A до B (A <= B): ";
    cin >> A >> B;
    
    cout << "Числа, кратные трём : ";
    int i = A;
    while (i <= B) 
    {
        if (i % 3 == 0) 
        {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    
    return 0;
}

// do while
#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    
    cout << "Введите числа от A до B (A <= B): ";
    cin >> A >> B;
    
    cout << "Числа, кратные трём : ";
    int i = A;
    do {
        if (i % 3 == 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= B);
    cout << endl;
    
    return 0;
}
