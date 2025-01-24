#include<iostream>
using namespace std;
int main()
{
    // int a  = 5;
    // int b = 10;
    //a+b;
    //a-b;
    //a*b;
    //cout << a++ <<endl;

    //cout<< ans;
    //cout<<a++ + ++a<<endl;
//relational operators
//logical operators
//bool operators
//Design a C++ program to create a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus. The program should take two numbers and an operator as input from the user and display the result based on the selected operation.
  int a,b,sum,sub,mul,div,mod;
   cin>> a;
    cin>> b;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    cout<< "sum "<<sum<<endl;
    cout<<"sub "<<sub<<endl;
    cout<<"mul "<<mul<<endl;
    cout<<"div "<<div<<endl;
    cout<<"mod "<<mod<<endl;
}