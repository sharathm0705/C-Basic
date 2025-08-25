//No argument & no return type :

#include <stdio.h>
void add(void);
int main(){
    add();
    
    return 0;
}
void add(){
    int a=23,b=34;
    int sum=a+b;
    printf("%d",sum);
}