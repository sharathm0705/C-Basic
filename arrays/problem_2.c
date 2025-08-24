// A person needs to reach home by train but compulsively switches trains at every station. If they start with train arr1 at the first station, they will switch to train arr2 at the next station, and then switch back to train arr1 at the following station, and so on. Similarly, if they start with train arr2, they will switch to train arr1 at the next station, and continue alternating.

// Given two arrays, arr1 and arr2, where:

// arr1[i] represents the time taken by train arr1 at station i.
// arr2[i] represents the time taken by train arr2 at station i.
// Determine the minimum total time required to reach home starting from either train arr1 or train arr2, with the switching pattern maintained.

// Examples:
// Input: arr1 = [2, 1, 2], arr2 = [3, 2, 1]
// Output: 5
// Explanation: Starting with train arr2 yields the minimum total time of 5.
// Input: arr1 = [1, 3, 1, 2] arr2 = [2, 2, 3, 1]
// Output: 5
// Explanation: Starting with train arr1 yields the minimum total time of 5.

//Program:

#include <stdio.h>
int main(){
    int arr1[]={2,1,2};
    int arr2[]={3,2,1};
    int sum1=arr1[0],sum2=arr2[0],even=0,odd=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);

    for(int i=1;i<n;i++){
        sum1+=i%2==0?arr1[i]:arr2[i];
        sum2+=i%2==0?arr2[i]:arr1[i];

    }
    if(sum1<sum2)
    printf("%d",sum1);
    else
    printf("%d",sum2);

    return 0;
}