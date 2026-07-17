#include <stdio.h>
int main(){
//Sum of n natural number :
int n;
int fact=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact*=i;
}
printf("%d",fact);

    return 0;
}