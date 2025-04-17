#include <iostream>
using namespace std;

int main()
{
    // we can use switch case as alternative of if_else statements
    // if there are many conditions to check then we can use switch case
    // Suppose we have 4 conditions (1,2,3,4)

    int a;
    cout << "Enter value of a : ";
    cin >> a;
    switch (a)
        {
        case 1:
            cout << "First condition called" << endl;
            // if any one condition is true then break will stop checking conditions and exit switch case
            break;
        case 2:
            cout << "Second condition called" << endl;
            break;
        case 3:
            cout << "Third condition called" << endl;
            break;
        case 4:
            cout << "Fourth condition called" << endl;
            break;

        default:
            // default condition is called when no case is true
            cout << "Invalid input" << endl;
            break;
        }

    return 0;
}