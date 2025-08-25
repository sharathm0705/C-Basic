//To print the reverse of the number using functions :
#include <stdio.h>
int reverse();
int main(){
    int n;
    scanf("%d",&n);
    int rev=reverse(n);
    printf("%d",rev);
    return 0;
}

int reverse(int n){
    int rev=0;
    while (n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
    
    
}