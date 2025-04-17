#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;
    int i = 0;

    // Runs the code once before checking the condition — good when you always want at least one run.
    do
    {
        cout << i << endl;
        i++;
    }while (i < input);

    return 0;
}