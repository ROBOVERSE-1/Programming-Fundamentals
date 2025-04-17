#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
// make three variables
int a=1;
int b=10;
int c=123;
int d=1234;
// now print them
cout<<"The value of a is : "<<a<<endl;
cout<<"The value of b is : "<<b<<endl;
cout<<"The value of c is : "<<c<<endl;
cout<<"The value of d is : "<<d<<endl;
// Now we are using manipulators in c++ for giving the size of our own choice
// For this include library of iomanip
cout<<"The value of a is : "<<setw(4)<<a<<endl;
cout<<"The value of b is : "<<setw(4)<<b<<endl;
cout<<"The value of c is : "<<setw(4)<<c<<endl;
cout<<"The value of d is : "<<setw(4)<<d<<endl;


return 0;
}