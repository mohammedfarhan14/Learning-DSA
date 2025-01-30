// the time complexity for selection sort is O(n^2).
//this is for all 3 cases (best, worst, average)                

#include<bits/stdc++.h>
using namespace std;
void selection(int arr[], int n){
    for(int i = 0; i<n-2; i++){
        int mini = i;
        for(int j = i; j<n-1; j++){
            if(arr[j] < arr[mini])
            mini = arr[j];
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
}
for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array values: "<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    selection(arr, n);
    return 0;
}