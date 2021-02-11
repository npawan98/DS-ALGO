// Input: arr[] = {3, 10, 2, 1, 20}
// Output: Length of LIS = 3
// The longest increasing subsequence is 3, 10, 20

// Input: arr[] = {3, 2}
// Output: Length of LIS = 1
// The longest increasing subsequences are {3} and {2}

// Input: arr[] = {50, 3, 10, 7, 40, 80}
// Output: Length of LIS = 4
// The longest increasing subsequence is {3, 7, 40, 80}


#include<bits/stdc++.h>
using namespace std;

    int lis( int arr[], int n ) {  
    int lis[n]; 
    lis[0] = 1;    
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
}  


int main(){
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<lis(arr,n);
}