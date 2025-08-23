#include <stdio.h>
int main(){
    unsigned n;
    scanf("%d",&n);
    n=~n;
    printf("%d",(unsigned int) n);
}