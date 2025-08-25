//To print index of given number :

#include <stdio.h>
int main(){
    int r,c,key;
    scanf("%d%d%d",&r,&c,&key);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==key){
                printf("[%d][%d]",i,j);
                break;
            }
        }
    }
    return 0;
}