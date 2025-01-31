//RECURSION:-- when a function calls itself until a specific condition is met.
// Online C++ compiler to run C++ program online

// The stop condition is called as "The Base Condition"...There can be single or multiple base conditions
// Recursion Tree later 

//  return; statement // cannot use 'break' statement so 'return' statement is used
#include <bits/stdtr1c++.h>
using namespace std;
int main() {
//------------------------------------------------------------------------
//print name N times using recursion

void name( int i, int n )
{
   if(i > n) 
   return;
cout<<"Mohammed Farhan"<<endl;
   name( i+1, n );
} 


// int count;
// int name (int i, int n){
//     cout<<"Mohammed Farhan"<<" " << count<<endl;
//     count ++;
//     if(count == n)
//     return n; //  return; statement cannot use 'break' statement so 'return' statement is used
//     name(i, n);
// }
//------------------------------------------------------------------------
// Print Linearly from 1 to n and reverse of it from n to 1

void num(int i, int n){
    if(i > n)
    return;
    cout<<i<< " ";
    num(i+1, n);
}
//------------------------------
// reverse

void num1(int i, int n){
    if(i < 1 )
    return ;
    cout<<i<<" ";
    num1(i-1, n);
}
//------------------------------------------------------------------------
// Print Linearly from 1 to n by using Backtracking and it's reverse as well

void num(int i, int n){
    if(i < 1)
    return;
    num(i-1, n);
    cout<< i << " ";
}
//------------------------------
// reverse                 
void num(int i, int n){   //( "if u write this in notes, draw recursion tree as well")
    if(i > n)
    return;
    num(i+1, n);
    cout<< i << " ";
}
//------------------------------------------------------------------------
// Sum of first N numbers using Recursion

// There are 2 ways:
// 1.) Parameterised way
// 2.) Functional way 

void num(int i, int sum){
    if(i < 1){
        cout<<sum<<endl;    // Paramaterised 
        return;
    }
    num(i-1, sum+i);
}
//------------------------------

int num1(int n){
    if(n == 0)
    return 0;           // Functional   //////////   recheck this function code
    else {
        return (n + num1 (n-1));
    }
}









}