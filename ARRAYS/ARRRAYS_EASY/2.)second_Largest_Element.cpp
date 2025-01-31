// finding second largest element in an array
// or finding the 2nd smallest element in an array

//sorting time + Finding 2nd largest (only in worst case when all elements are largest (SAME)) = O(2n) //TIMECOMPLEXITY FOR BRUTE

#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

void brute_Sol(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end()); //sorting takes time of O(n)
    int largest = arr[n - 1];
    int secondlargest = -1; // Default value if no second largest element is found

    // Find the second largest element
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) { //this ONLY IN WORST CASE IF ALL ELEMENTS ARE LARGEST THEN O(n)
            secondlargest = arr[i];
            break; // Stop once the second largest is found
        } 
    }

    if (secondlargest != -1)
        cout << "Second largest element is: " << secondlargest << endl;
    else
        cout << "No second largest element found" << endl;
}



// second largest better solution
void better_Sol(vector<int> &arr, int n){
    int secondlargest = -1;
    for(int i =0; i<n-1; i++){
        if(arr[i]>secondlargest && arr[i]!= largest){  //sort the array for largest 
            secondlargest = arr[i];
        }
    }
    cout<<secondlargest;
}






//optimal solution

void Optimal_Sol(vector<int> &arr, int n){
    int largest = arr[0];
    int secondlargest = -1;
    for(int i =1; i<n; i++){
        if(arr[i]>largest)
        secondlargest = largest; //important step, u have to 1st take the value of 2ndlargest  then set the largest = arr[i] //think
        largest = arr[i];
    }
    else if(arr[i]<largest && arr[i]>secondlargest){
        secondlargest = arr[i];
    }
}







int main() {
    int n;
    cout << "Enter number of elements (n): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    brute_Sol(arr, n); // Call the function to find the second largest element
    better_Sol(arr, n);
    Optimal_Sol(arr, n);
    return 0;
}

