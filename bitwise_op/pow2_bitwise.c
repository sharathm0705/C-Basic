//Check wether the given number is power of 2 using bitwise operation;
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n&(n-1))==0){
        printf("Yes");
    }else
        printf("No");
    return 0;
}