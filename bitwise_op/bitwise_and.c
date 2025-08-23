//Check wether the position of given bit is set or not set using bit wise AND operation;
#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    if((n>>(k-1)&1)==1){
        printf("Set Bit");
    }else
        printf("Not Set");
    return 0;
}