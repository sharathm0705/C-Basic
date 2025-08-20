#include <stdio.h>
int main(){

int a,b;
scanf("%d%d",&a,&b);
if(a--||b--)
printf("A");
else
printf("B");
printf("\n%d,%d",a,b);

    return 0;
}