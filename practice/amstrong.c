#include <stdio.h>
#include <math.h>
int main(){
    int n , count=0,sum=0,ld=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        
        count++;
        temp=temp/10;
    }temp=n;
    while(temp>0){
    
        sum=sum+pow(temp%10,count);
        temp=temp/10;

    }if(n==sum){
        printf("Amstrong Number");
    }else{
        printf("Not a Amstrong Number");
    }



    return 0;
}