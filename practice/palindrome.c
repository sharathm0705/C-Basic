#include <stdio.h>
int main(){
//Palindrome:
int rev=0,n;
scanf("%d",&n);
int temp=n;
while(n>0){
    rev=rev*10+n%10;
    n=n/10;
}printf("The reverse of given number is %d\n",rev);
if(rev==temp){
    printf("It is a palindrome ...\n");
}else
printf("It is not palindrome...\n");

    return 0;
}