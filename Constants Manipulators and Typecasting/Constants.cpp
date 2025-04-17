#include <iostream>
using namespace std;

int main()
{
    // make an ainteger variable
    int a = 20;
    cout << "The value of a is : " << a << endl;
    // now change value of a
    a = 40;
    cout << "The value of a is : " << a << endl;
    // if i make 'a' as a constant variable then i cannot change it
    const int b = 40;
    cout<<"The value of b is : "<<b<<endl;
    // b = 20;          //this line will give error because we change a constant variable

    return 0;
}