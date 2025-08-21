#include <stdio.h>
int main(){
    //Total sum of Digits
int sum=0,n;
scanf("%d",&n);
while(n>0){
    sum=sum+n%10;
    n=n/10;
}
printf("Total sum of Digit is %d\n",sum);
    return 0;
}