#include<iostream>
using namespace std;


int main()
{
    // The break statement is used to immediately exit a loop (like for, while, or do-while) or a switch statement.
    cout<<"The first loop"<<endl;
for (int i = 0; i < 10; i++)
{
    if (i==5)
    {
    break;
    }
    cout<<i<<endl;
    
}
// The continue statement skips the current iteration of the loop and jumps to the next one.
cout<<"The Second loop"<<endl;
for (int i = 0; i < 10; i++)
{
    if (i==5)
    {
    continue;
    }
    cout<<i<<endl;
    
}


return 0;
}