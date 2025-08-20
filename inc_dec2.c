#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a++;
    int c=++a;
    int d=a--;
    int e=--a;
    printf("%d,%d,%d,%d,%d",a,b,c,d,e);

    return 0;
}