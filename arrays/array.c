// #include <stdio.h>
// int main(){
//     int a[5];
//     a[0]=1;
//     a[1]=2;
//     printf("%d",a[1]);
//     return 0;
// }


// You are given an array arr and an integer k. In one operation you can choose any element of array and decrease its value by k. You need find the minimum number of operation such that all the elements in the array becomes less or equal to k.

// Examples:

// Input: arr[] = [5, 3, 2, 6, 8] and k = 5
// Output: 2
// Explanation: Ishaan can climb a wall with height atmost 5. So he climbs the first 3 walls easily. Now he has to use his power to reduce the height of the 4th wall. After using his power, Now to climb the last wall, he again uses his power.

// Input: arr[] = [2, 6, 4, 8, 1, 6] and k = 4 
// Output: 3 
// Explanation: Ishaan can climb a wall with height atmost 5. He can't climb the wall with height 6, 8, 6.

#include <stdio.h>
int main(){
    int k,count=0;
    scanf("%d",&k);
    int arr[]={2, 6, 4, 8, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>k){
          while(arr[i]>k){
            arr[i]=arr[i]-k;
            count++;
          }
        }
    }
    printf("%d\n",count);
    return 0;
}
