#include <iostream>
using namespace std;
int main()
{
    cout << 100/24 << "\t" << 100/24.0 << endl;        // 4   4.16667
    cout << 100/21 << "\t" << 100.0/24 << endl;        // 4   4.16667
    cout << 21%3 << "\t" << 21%6 << "\t" << -21%8 << endl; // 0   3   -5
    return 0;
}
