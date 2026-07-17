#include <stdio.h>
int main(){
    int n;
    int flag=0;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i=i*2){
        if(i==n){
            flag=1;
        }
    }if(flag==1){
        printf("It is Power of 2");
    }else
    printf("Not power of 2");

    return 0;
}