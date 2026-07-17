//To print the compliment of the given number in desimal ;
#include <stdio.h>
#include <math.h>
int main(){
    int n,sum=0,count=0,r;
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        count++;
        if(r==0){
            sum+=pow(2,count-1);
        }
        n=n/2;
    }
    printf("%d\n",sum);

    
    
}