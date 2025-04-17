#include <iostream>
using namespace std;

int main()
{
    // Perfect when you know how many times to repeat.number of iteration are unknown
    int input;
    cout << "Enter input : ";
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        cout << i << endl;
    }

    return 0;
}