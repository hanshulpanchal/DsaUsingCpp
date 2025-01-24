#include<iostream>
using namespace std;
int main()
{
//    if(condition){
        //statement 1
 //   }
 //else if(condition){
 //}
//else{
    //statement 2


//}


//ternary operator
//condition ? statement1 : statement2
// int num;
// cout<<"Enter num";
// cin>> num;

// string ans = num > 0 ? "positive" : "Negative";
// cout << ans;

int a,b,c;
cin >> a >> b >> c;
// string result = a>b && a>c ?"a is largest" : ((b>a && b>c)? "b is greatest": "c is greatest" );
// cout << result;

if (a>b && a>c)
{
    cout <<"a is greatest";
}
else if(b>a && b>c)
{
    cout << "b is greatest";
}
else
{
    cout<<" c is greatest";
}


//loop (intialisation, execution, termination)
}