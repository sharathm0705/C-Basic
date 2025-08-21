#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int sum=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            sum+=j;
        }
    }if(sum==2*i){
        printf("%d\n",i);
    }}
    return 0;
}