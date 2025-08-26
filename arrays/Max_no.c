//To print the Maximum number in an Array :

#include <stdio.h>
int main(){
    int arr[]={10,3,9,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<n-1;i++){
        
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    printf("%d",max);
    return 0;
}