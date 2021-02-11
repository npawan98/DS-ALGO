// to find missing number in a array

// Calculate the sum of first n natural numbers as sumtotal= n*(n+1)/2
// Create a variable sum to store the sum of array elements.
// Traverse the array from start to end.
// Update the value of sum as sum = sum + array[i]
// Print the missing number as sumtotal – sum

#include<bits/stdc++.h>
using namespace std;

int getMissing(int arr[],int n){
    
    int total = (n+1)*(n+2)/2;
    for(int i = 0;i<n;i++){
        total = total-arr[i];
    }
        return total;
    
}

int main(){
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getMissing(arr,n);
    
}