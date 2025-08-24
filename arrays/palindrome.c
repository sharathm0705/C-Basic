//Check list the palindrome numbers in an Array :

#include <stdio.h>
int main(){
    int rev=0;
    int a[]={123,121,4334,261,656};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
     int temp=a[i],rev=0;
        while(temp>0){
            
         rev=rev*10+temp%10;
         temp=temp/10;
        
        }if(rev==a[i]){
            printf("%d\t",a[i]);
         }
    }
    return 0;
}