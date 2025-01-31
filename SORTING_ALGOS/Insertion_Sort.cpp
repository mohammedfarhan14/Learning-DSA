// time complexity for insertion sort is (O(n^2)) for worst and average case 
// for best case the time complexity for insertion sort is (0(n))

#include<bits/stdc++.h>
using namespace std;
void insertion_Sort(int arr[], int n){
for(int i=0; i<n-1; i++){
    int j = i;
    while(j>0 && arr[j-1]> arr[j] ){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j]= temp;

        j--;
    }
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
    insertion_Sort(arr, n);

    return 0;
}