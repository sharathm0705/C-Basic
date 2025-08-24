// Given an array arr[], swap the kth element from the beginning with the kth element from the end.

// Note: 1-based indexing is followed.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8], k = 3
// Output: [1, 2, 6, 4, 5, 3, 7, 8]
// Explanation: 3rd element from beginning is 3 and 3rd element from end is 6, so we replace 3 & 6.
// Input: arr[] = [5, 3, 6, 1, 2], k = 2
// Output: [5, 1, 6, 3, 2]
// Explanation: 2nd element from beginning is 3 and from end is 1.
//Problem :

#include <stdio.h>
int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int temp=arr[k-1];
    arr[k-1]=arr[n-k];
    arr[n-k]=temp;

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } 

    return 0;
}