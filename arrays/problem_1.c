//Given a positive integer x and an array arr of positive integers. We need to find the farthest index at which x is present. If any occurrence of x doesn't exist, then return -1.

// Examples:

// Input: arr[] = [7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7] and x = 7
// Output: 11
// Explanation: The last index contains value 7.
// Input: arr[] = [1, 2, 2] and x = 1
// Output: 1
// Expplanation: The farthest index which contains value x is 1.
//Program :

#include <stdio.h>
int main(){
int a[]={2,4,1,65,34,12,4,1,2};
int n=sizeof(a)/sizeof(a[0]);
int x;
scanf("%d",&x);
for(int i=n-1;i>=0;i--){
    if(a[i]==x){
        printf("%d",i+1);
        return 0;
    }
}
    printf("-1");
    
}