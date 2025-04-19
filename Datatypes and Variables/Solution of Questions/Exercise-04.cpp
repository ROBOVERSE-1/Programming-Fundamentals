#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    cout << "a" << "    " << "a^2" << "    " << "a^3" << endl;
    cout << a << "    " << a * a << "      " << a * a * a << endl;
    a++;
    cout << a << "    " << a * a << "      " << a * a * a << endl;
    a++;
    cout << a << "    " << a * a << "      " << a * a * a << endl;
    a++;
    cout << a << "    " << a * a << "     " << a * a * a << endl;
    return 0;
}