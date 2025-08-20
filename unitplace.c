#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
scanf("%d%d",&a,&b);
a=a%10;
if(a==0||a==1||a==5||a==6){
    printf("%d",a);
}else if(a==2||a==8){
    int x=b%4;
    a=(6*(int)pow(a,x));
    printf("%d",a%10);
}else if(a==4){
    a=(6*(int)pow(a,b%2));
    printf("%d",a%10);
}else if(a==3||a==7){
    a=(1*(int)pow(a,b%4));
    printf("%d",a%10);
}else if(a==9){
    a=(1*(int)pow(a,b%2));
    printf("%d",a%10);
}
    return 0;
}