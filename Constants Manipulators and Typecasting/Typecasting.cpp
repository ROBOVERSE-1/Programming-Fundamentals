#include <iostream>
using namespace std;

int main()
{
    // typecasting is used to change the datatype of variables
    float a = 24.5;
    double c=12.9;
    cout << "The value of a is : " << a<<endl;
    cout << "The value of (int) of a is : " << (int)a << endl;
    cout << "The value of c is : " << c<<endl;
    cout << "The value of (int) of c is : " << (int)c << endl;
    int b = 12;
    // we cannot sum the a and b directly because of different datatypes
    // we can use type casting
    cout << "The sum of a and b is : " << (int)a + b << endl;

    return 0;
}