03.cpp
#include<iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operator;
    cout<<"enter operator: ";
    cin>>operator;
    cout<<"enter two numbers: ";
    cin>>num1 >>num2;
    switch(operator){
        case '+':
        cout<< num1 +num2 <<endl;
        break;
        case '-':
        cout<< num1 - num2 <<endl;
        break;
        case '*':
        cout<<num1*num2 <<endl;
        break;
        case '/':
        cout <<num1 / num2 <<endl;
        break;
        default :
        cout <<"Error";
    }
}