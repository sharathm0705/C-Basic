//Simple example to understand 2D-Array :

#include <stdio.h>
int main(){
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    return 0;
}