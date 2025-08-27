//Binary Search :(Binary search is possible only in sorted array)

#include <stdio.h>
int main(){
int a[]={2,3,8,9,14,21,35,45,57,68,74,87};
int n=sizeof(a)/sizeof(a[0]);
int key,left=0,right=n-1,mid=0;
scanf("%d",&key);
while(left<=right){
    mid=(left+right)/2;
    if(a[mid]==key){
        printf("%d\n",mid);
        return 0;
    }else if(a[mid]>key){
        right=mid-1;
    }else
        left=mid+1;
}
    printf("-1");
    
}