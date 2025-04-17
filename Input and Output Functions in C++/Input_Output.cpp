#include <iostream>
using namespace std;
// for using input and output functions add iostream library
// Input with cin
// cin stands for "character input"

// It reads data from the standard input device (usually the keyboard)

// It is used with the extraction operator >>

// Output with cout
// cout stands for "character output"

// It displays data to the standard output device (usually the screen)

// It is used with the insertion operator <<
int main()
{
    // make a variable
    int input;
    // now take input from user
    cout<<"Enter your input : ";
    cin >> input;
    // now print it on terminal;
    cout << "The input from user is : " << input << endl;
    // we use endl for new line
    return 0;
}