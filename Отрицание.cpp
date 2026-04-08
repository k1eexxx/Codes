#include <iostream>
using namespace std;
int main()
{
    int x = 3, y = 0;
    bool f = false, v = true;
    cout << -x << "\t" << !x << endl;    // -3   0
    cout << -y << "\t" << !y << endl;    // 0    1
    cout << f << "\t" << !f << endl;     // 0    1
    cout << v << "\t" << !v << endl;     // 1    0
    return 0;
}
