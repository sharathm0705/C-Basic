//No argument & with return type :

#include <stdio.h>
int add(void);
int main(){
    int c=add();
    printf("%d",c);
    return 0;
}
int add(){
    int a=23,b=34;
    int sum=a+b;
    return sum;
}