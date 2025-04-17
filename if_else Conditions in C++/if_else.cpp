#include<iostream>
using namespace std;


int main()
{
    // if we want to check the conditions in C++ we use if else ststements in C++
int a =10;
int b=15;
// if there are only two conditions
if (a>b)
{
    cout<<"a is greator than b"<<endl;
}
else 
cout<<"a is less than b"<<endl;
// if conditions are more than two we use nested if-else statements

int age;
cout<<"Enter your age : ";
cin>>age;
if (age<18)
{
cout<<"You are not eligible to drive a car."<<endl;  
}
else if (age>18)
{
    cout<<"You are eligible to drive a car."<<endl; 
}
else if (age==18)
{
    cout<<"Wait for one year."<<endl; 
}
else 
cout<<"Invalid input"<<endl;






return 0;
}