//With argument & with return type :

#include <stdio.h>
int add(int,int);
int main(){
    int a=42,b=12;
    int c=add(a,b);
    printf("%d",c);
    return 0;
}
int add(int a, int b){
    int sum=a+b;
    return sum;
}