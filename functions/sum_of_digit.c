//To print the sum of digit in functions :

#include <stdio.h>
void sum_of_digit();
int main(){
    int n;
    scanf("%d",&n);
    sum_of_digit(n);
    return 0;
}

void sum_of_digit(int n){
    int sum=0;
    while(n>0){
    sum=sum+n%10;
    n=n/10;
}
printf("Total sum of Digit is %d\n",sum);
}