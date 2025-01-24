#include<iostream>
using namespace std;
// void fact(int n){
//     //base
// if(n==0) return 1;

// return n*fact(n-1);
//     //relation(s,e)
// }
// int main(){
// //reach deast()
// }

//fibonacci recursion
int fibonacci(int x){
    if((x==1)||(x==0)){
    return x;
}
else{
    return(fibonacci(x-2)+fibonacci(x-1));
}
}
int main(){
    int num = 5,i =0;
    for(int i = 0;i<x;i++){
        fib(i);
    }
}



// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input: N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].