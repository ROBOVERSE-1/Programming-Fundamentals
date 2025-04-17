#include<iostream>
using namespace std;


int main()
{
int a =10;
int b=20;
// Arithmetic operators in c++
cout<<"The sum of a and b is : "<<a+b<<endl;                //addition
cout<<"The difference of a and b is : "<<a-b<<endl;//substraction
cout<<"The product of a and b is : "<<a*b<<endl;//multiplication
cout<<"The division of a and b is : "<<b/a<<endl;//division
cout<<"The modulus of a and b is : "<<a%b<<endl;//remainder
cout<<"The post increment of a and b is : "<<a++<<endl; // first print a then increment 
cout<<"The pre increment of a and b is : "<<++a<<endl;  //first increm
cout<<"The post decrement of a and b is : "<<a--<<endl;
cout<<"The pre decrement of a and b is : "<<--a<<endl;

// Assignment oerators in C++
// in following we assign 20 to c by using assignment operator 
int c=20;
// Comparison Operators in C++
cout<<"Is a>b : "<<(a>b)<<endl;
cout<<"Is a<b : "<<(a<b)<<endl;
cout<<"Is a>=b : "<<(a>=b)<<endl;
cout<<"Is a<=b : "<<(a<=b)<<endl;
cout<<"Is a==b : "<<(a==b)<<endl;
cout<<"Is a!=b : "<<(a!=b)<<endl;

// Logical Operators in C++
cout<<"Is (a>b) and (b<a) : "<<((a>b)&&(b<a))<<endl;
cout<<"Is (a>b) or (b<a) : "<<((a>b)||(b<a))<<endl;




return 0;
}