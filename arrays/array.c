// #include <stdio.h>
// int main(){
//     int a[5];
//     a[0]=1;
//     a[1]=2;
//     printf("%d",a[1]);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a[5];
//     a[0]=1;
//     a[1]=2;
//     printf("%d",sizeof(a));
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }for(int i=0;i<5;i++){
//         a[i]++;
//     }for(int i=0;i<5;i++){
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }


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