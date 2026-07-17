//With argument & no return type :

#include <stdio.h>
void add(int,int);
int main(){
    int a=32,b=43;
    add(a,b);
    return 0;
}
void add(int a, int b){
    
    int sum=a+b;
    printf("%d",sum);
}