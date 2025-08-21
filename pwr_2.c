#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;i*2){
        if(i==n){
            flag=1;
            break;
        }
    }if(flag=1){
        printf("It is Power of 2");
    }else
    printf("Not power of 2");

    return 0;
}