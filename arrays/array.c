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




//Sum of Array:
// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter Size of Array : ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }for(int i=0;i<n;i++){
//         sum+=a[i];
//     }printf("%d\n",sum);
//     return 0;
// }




//Average :
// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter Size of Array : ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }for(int i=0;i<n;i++){
//         sum+=a[i];
//     }printf("%f\n",sum*1.0/n);
//     return 0;
// }



//Number of Even and Odd numbers in an Array :
// #include <stdio.h>
// int main(){
//     int n,even=0,odd=0;
//     printf("Enter Size of Array : ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }for(int i=0;i<n;i++){
//         if(a[i]%2==0){
//             even++;
//         }else
//             odd++;
//     }printf("Even : %d\n",even);
//     printf("Odd : %d\n",odd);
//     return 0;
// }

//Check list the palindrome numbers in an Array :
// #include <stdio.h>
// int main(){
//     int rev=0;
//     int a[]={123,121,4334,261,656};
//     int n=sizeof(a)/sizeof(a[0]);
    
//     for(int i=0;i<n;i++){
//      int temp=a[i],rev=0;
//         while(temp>0){
            
//          rev=rev*10+temp%10;
//          temp=temp/10;
        
//         }if(rev==a[i]){
//             printf("%d\t",a[i]);
//          }
//     }
//     return 0;
// }


//To list the prime numbers in an array : 
// #include <stdio.h>
// int main(){
//     int a[]={10,5,17,6,4,8,11,13};
//     int n=sizeof(a)/sizeof(a[0]);
    
//     for(int i=0;i<n;i++){
//      int flag=1;
//         for(int j=2;j<a[i];j++){
//         if((a[i]%j)==0){
//             flag=0;
//             break;
//         }
//     }if(flag==1){
//         printf("%d\n",a[i]);
//     }
//     }
//     return 0;
// }



//Linear Search :
// #include <stdio.h>
// int main(){
// int a[]={2,4,1,65,34,12};
// int n=sizeof(a)/sizeof(a[0]);
// int key;
// scanf("%d",&key);
// for(int i=0;i<n;i++){
//     if(a[i]==key){
//         printf("%d",i);
//         return 0;
//     }
// }
//     printf("-1");
    

// }

//Binary Search :(Binary search is possible only in sorted array)
#include <stdio.h>
int main(){
int a[]={2,3,45,8,9,14,21,35,45,5,68,74,87};
int n=sizeof(a)/sizeof(a[0]);
int key,left=0,right=n-1,mid=0;
scanf("%d",&key);
for(int i=0;i<n;i++){
    mid=(left+right)/2;
    if(a[i]==key){
        printf("%d\n",i);
        return 0;
    }else if(a[mid]>key){
        right=mid-1;
    }else
        left=mid+1;
}
    printf("-1");
    

}
