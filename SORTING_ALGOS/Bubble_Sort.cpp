// Bubble sort pushes the maximum element to the last by doing adjacent swaps in the array until the array is sorted.  

// this bubble sort has time complexity of ( O(n^2) FOR WORST CASE!!)
//but we can improve this time complexity by using a flag variable to check if the array is sorted or not.
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) {
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"NUMBER OF TIMES THAT THE ARRAY HAS RUN : "<<i<<endl;
    }
   for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
} 

//WE JUST HAVE TO ADD DIDSWAP FLAG AND BREAK THE LOOP WHEN THERE WAS NO SWAP(SAME LOGIC BUT JUST WITH ADDED DIDSWAP FLAG AND BREAK LOOP LOGIC)
// the timecomplexity of this improved bubble sort is ( O(n) FOR BEST CASE!!)
void improved_BubbleSort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        bool didSwap = false;
        for(int j = 0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = true;
            }
        }
        if(!didSwap) break;
        cout<<"NUMBER OF TIMES THAT THE ARRAY HAS RUN : "<<i<<endl;
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
    bubbleSort(arr, n);
    improved_BubbleSort(arr, n);

    return 0;
}   