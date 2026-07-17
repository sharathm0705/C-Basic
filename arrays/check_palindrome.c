//To check wether all the numbers in an array is Palindrome :

#include <stdio.h>
int main(){
    int rev=0,flag=0;
    int a[]={123321,121,4334,261162,656};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
     int temp=a[i],rev=0;
        while(temp>0){
            
         rev=rev*10+temp%10;
         temp=temp/10;
        
        }if(rev!=a[i]){
            flag=1;
            break;
         }
    }if(flag==0){
        printf("1");
    }else
    printf("0");
    return 0;
}