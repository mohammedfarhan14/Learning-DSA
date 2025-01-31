//largest element in an array...
// 1st question in the sheet 

//no optimal solution(only brute and better)
#include<bits/stdc++.h>
using namespace std;

//brute solution 
//here we sort the aarray and then print arr[n-1];
void brute_Sol(vector <int> &arr, int n){
     sort(arr.begin(), arr.end());
   for(int i=0; i<n-1; i++)
        cout<<arr[n-1];
}


//better solution
void better_Sol(vector<int> &arr, int n){  //for finding the largest element in the array
    int largest = arr[0];
    for(int i=1; i<n-1; i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
    cout<<largest;
}






int main() {
    int n;  
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);  // Create a vector of size n
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Input the elements of the array
    }
    brute_Sol(arr, n);// brutal solution
    better_Sol(arr, n);  // Call the function to find the largest element
    return 0;
}