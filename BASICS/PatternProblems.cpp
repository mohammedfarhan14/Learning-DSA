// Pattern Problems (1.2)
/*                    ---------Reason to solve pattern problems is to get better with loops-------
    POINTS TO REMEMBER FOR SOLVING PATTERN PROBLEMS:---

  **Patterns will always have nested loops (Most of them).
   (The outer loops are for `rows` and inner loops are for the `columns`)

    1. for the outer loop count the number of lines (rows)
    2. for the inner loop focus on the (columns) and connect them somehow to the rows
    3. Whatever u are printing, print them inside the the inner loop
    4. observe Symmetry (OPTIONAL STEP)
*/
// ---------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------------------
void print1(int n){
    // pattern 1
for(int i =0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void print2(int n){
    // pattern 2
for(int i =0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void print3(int n){
    // pattern 3
for(int i =0; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<< j ;
		}
		cout<<endl;
	}
}

void print4(int n){
    // pattern 4
for(int i =0; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<< i ;
		}
		cout<<endl;
	}
}

void print5(int n){
	// pattern 5
    for(int i =0; i<n; i++ ){
        for( int j =1; j<n-i+1; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}

void print6(int n){
	// pattern 6
    for(int i =0; i<n; i++ ){
        for( int j =1; j<n-i+1; j++){
            cout<< j;
        }
        cout<<endl;
    }
}

void print7(int n){
	// pattern 7
    for(int i =0; i<n; i++ ){
        //space
        for( int j =0; j<n-i-1; j++){
            cout<< " ";
        }
          //stars
        for( int j =0; j<2*i+1; j++){
            cout<< "* ";
        }
        
          //space
        for( int j =0; j<n-i-1; j++){
            cout<< " ";
        }
        
        cout<<endl;
    }
}

void print8(int n){
	// pattern 8
    for(int i=0; i<n; i++ ){
        //space
        for( int j=0; j<i; j++){
            cout<< " ";
        }
          //stars
        for( int j=0; j< 2*n - (2*i+1); j++){
            cout<< "* ";
        }
        
          //space
        for( int j=0; j<i; j++){
            cout<< " ";
        }
        
        cout<<endl;
    }
}

void print9(int n){
	// pattern 7
    for(int i =0; i<n; i++ ){
        //space
        for( int j =0; j<n-i-1; j++){
            cout<< " ";
        }
          //stars
        for( int j =0; j<2*i+1; j++){
            cout<< "* ";
        }		// just combine pattern 7 and 8 and print them together.
        
          //space
        for( int j =0; j<n-i-1; j++){
            cout<< " ";
        }
        
        cout<<endl;
    }	// pattern 8
    for(int i=0; i<n; i++ ){
        //space
        for( int j=0; j<i; j++){
            cout<< " ";
        }
          //stars
        for( int j=0; j< 2*n - (2*i+1); j++){
            cout<< "* ";
        }
        
          //space
        for( int j=0; j<i; j++){
            cout<< " ";
        }
        
        cout<<endl;
    }
}

void print10(int n){
	// pattern 10
    for( int i =1; i<=2*n-1 ; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
          for(int j =1; j<=stars; j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print11(int n){
	// pattern 11
	int start = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j =0; j<=i; j++){
            cout<< start;
            start = 1-start;
        }
        cout<<endl;
    }
}



int main(){
    int n;
    cin>> n;
    print1(n);
    print2(n);
    print3(n);
    print4(n);
	print5(n);
	print6(n);
	print7(n);
	print8(n);
	print9(n);
	print10(n);
	print11(n);
	print12(n);
	print13(n);
	print14(n);
	print15(n);
	print16(n);
	print17(n);
	print18(n);
	print19(n);
	print20(n);
	print21(n);
	print22(n);
}

