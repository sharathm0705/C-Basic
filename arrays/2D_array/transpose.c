#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("Given Matrix is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[j][i]; 
        }
    }
    printf("Transpose of the matrix is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            printf("%d\t",b[i][j]);
        }printf("\n");
    }
    

    return 0;
}