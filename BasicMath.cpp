# include <bits/stdc++.h>
using namespace std;
int main (){
//---------------------------------------------------------

// 1.) //Extraction of numbers


// 7788 
// Extracting this number code 
int lastdigit(int n){
    int count = 0;
    while (n > 0){
        count ++;
        n = n / 10;
    }
    return count;
}
// ---------------------------------------- OR Another Method ----------------------------------------------------------------------
// Formulae method { log10 (any number) + 1 } 

int lastdigit(int n){
    int count = (int) (log 10(n) + 1) ;  //typecasting into intiger
    return count;
}
// // timecomplexity for this problem is = log 10(n)
// when there is any division happening 
// (if the number of iterations is based on division then always the time complexity will be logorathmic)




//-----------------------------------------------------------------------
// Reverse a number problem
// the trick is to somehow add a zero to the number and add the last digit 

int n;
cin>> n;
int revnum = 0;

while (n > 0){
    int lstdigit = n % 10;
    revnum = (revnum * 10) + lstdigit;
    n = n / 10;
}

cout<< revnum;


//------------------------------------------------------------------------
// Check Palindrome
// as "n" value will be zero in the last, therefore its imp to store a duplicate copy of "n" 

int n;
cin>> n;
int revnum = 0;
int duplicate = n;

while (n > 0){
    int lstdigit = n % 10;
    revnum = (revnum * 10) + lstdigit;
    n = n / 10;
}

if ( revnum == duplicate) cout<< "true ";
else cout<<" false";


//------------------------------------------------------------------------
// Armstrong Number
// example 371 = 3^3 + 7^3 + 1^3 should be equal to the number itself = 371
//example 1624 = 1^3 + 6^3 + 2^3 + 4^3 should be equal to the number itself = 1624 // this is not an armstrong number

int n = 4078;
int lstdig;
int dup = n;
int sum = 0;

while( n > 0){
    lstdig = n % 10;
    n = n /10;
    sum = sum + (lstdig * lstdig * lstdig);
}
if (sum == dup) {
    cout<<"Armstrong";
} else cout<<"not armstrong";


//------------------------------------------------------------------------
// Print all divisors
int n; 
   cin>>n;                      // Time Complexity for this is O(n); THEREFORE to Reduce this
for (int i =1; i<= n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
// ---------------------------------------- OR Another Method To Reduce Time Complexity -----------------------------------------------
// Print all divisors (video timestrap at 30:00)

// Mathematical Observation:
//  for example if the number is 36 then (n = 36, then)
/*
                    1 x 36|  = 36         = n/1
                    2 x 18|  = 36         = n/2
                    3 x 12| = 36         = n/3
                    4 x 9 |  = 36         = n/4   
          ---------------------------------        
                    6 x 6   = 36          = n/6 Till HERE IT'S :-- Sqrt(n)
          ---------------------------------
                    |9 x 4   = 36    
                    |12 x 3  = 36
                    |18 x 2  = 36       // Here it's replication of upper half
                    |36 x 1  = 36
*/

// Now looping till sqrt(n) is enough

 for (int i =1; i<= sqrt(n); i++){
        if(n % i == 0){
            cout<<i<<" ";
            if(n/i != i){
                cout<< n/i<< " ";
            }
        }
    }
}

// samething but using STL with sorted order

int divisor_function(int n){
vector <int> vect;
for(int i = 1; i < sqrt(n); i++){ //instead of sqrt(n)  use  i*i <= n 
    if(n % i== 0)
    vect.push_back(i);// cout<< i << " ";
    if(n/i != i)
    vect.push_back(n/i);// cout<< n/i << " ";
}
sort(vect.begin(), vect.end());
for(auto it: vect)
cout<< it << " ";
}


// as sqrt is a function it takes more time as that function is called again and again
// Therefore to solve this problem, we can use:-  i*i <= n  



//------------------------------------------------------------------------
// Check for Prime 
// I KNOW THE sqrt(n) METHOD (i*i<=n) -------
// PRIME NUMBER DEFINITION:-- Anumber that has exactly two facttors, one and the number itself.

int prime(int n){
    int count = 0;
    for(int i =1; i*i<=n; i++ ){
        if(n % i == 0)
            count++;
        if(n/i !=i)
        count++;
    }
    if(count == 2)
    cout<<"the number is a prime number"<<endl;
    else
    cout<<"the number is not a prime number"<<endl;
}

//------------------------------------------------------------------------
// GCD Or HCF
// for any given 2 numbers, there will always be a GCD or HCF which is  1

// Eucledian algo === [ GCD of (a, b) = GCD of (a-b, b) ] //this is the algo,  but takes more time

// (a % b, b) gives the same result and reduces time. // which means: // GCD of (a, b) = GCD of (a % b, b)

int gcd_hcf(int a, int b){
    while(a > 0 && b >0){
        if(a > b)
       a =  a % b;
        else
       b = b % a;
    }
    if(a == 0)
    return b;
    else //not required line
    return a;
    
}

















