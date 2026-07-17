// You are given an array arr[] consisting of positive integers. Return the maximum of every adjacent pairs in the array.

// Examples:

// Input: arr[] = [1, 2, 2, 3, 4, 5]
// Output: [2, 2, 3, 4, 5]
// Explanation: Maximum of arr[0] and arr[1] is 2, that of arr[1] and arr[2] is 2, ... and so on.
// Input: arr[] = [5, 5]
// Output: [5]
// Explanation: We only have two elements so max of 5 and 5 is 5 only.
// Program :

#include <stdio.h>
int main(){
    int arr[]={2,5,6,9,58,6,25,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        
        arr[i]>arr[i+1]?printf("%d\t",arr[i]):printf("%d\t",arr[i+1]);
    }

printf("\n");
    return 0;

}