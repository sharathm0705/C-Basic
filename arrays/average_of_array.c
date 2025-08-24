//Average :

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(int i=0;i<n;i++){
        sum+=a[i];
    }printf("%f\n",sum*1.0/n);
    return 0;
}