#include <iostream>
using namespace std;

int main()
{
    // Used when you don't know how many times you’ll loop — it depends on a condition.
    // number og iterations are unknown
    int input;
    cout << "Enter input : ";
    cin >> input;
    int i = 0;
    while (i < input)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}