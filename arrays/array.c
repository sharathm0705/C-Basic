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
// #include <stdio.h>
// int main(){
// int a[]={2,3,45,8,9,14,21,35,45,57,68,74,87};
// int n=sizeof(a)/sizeof(a[0]);
// int key,left=0,right=n-1,mid=0;
// scanf("%d",&key);
// while(left<=right){
//     mid=(left+right)/2;
//     if(a[mid]==key){
//         printf("%d\n",mid);
//         return 0;
//     }else if(a[mid]>key){
//         right=mid-1;
//     }else
//         left=mid+1;
// }
//     printf("-1");
    
// }




//To check wether all the numbers in an array is Palindrome :
// #include <stdio.h>
// int main(){
//     int rev=0,flag=0;
//     int a[]={123321,121,4334,261162,656};
//     int n=sizeof(a)/sizeof(a[0]);
    
//     for(int i=0;i<n;i++){
//      int temp=a[i],rev=0;
//         while(temp>0){
            
//          rev=rev*10+temp%10;
//          temp=temp/10;
        
//         }if(rev!=a[i]){
//             flag=1;
//             break;
//          }
//     }if(flag==0){
//         printf("1");
//     }else
//     printf("0");
//     return 0;
// }





//Given a positive integer x and an array arr of positive integers. We need to find the farthest index at which x is present. If any occurrence of x doesn't exist, then return -1.

// Examples:

// Input: arr[] = [7, 42, 5, 6, 42, 8, 7, 5, 3, 6, 7] and x = 7
// Output: 11
// Explanation: The last index contains value 7.
// Input: arr[] = [1, 2, 2] and x = 1
// Output: 1
// Expplanation: The farthest index which contains value x is 1.
//Program :
// #include <stdio.h>
// int main(){
// int a[]={2,4,1,65,34,12,4,1,2};
// int n=sizeof(a)/sizeof(a[0]);
// int x;
// scanf("%d",&x);
// for(int i=n-1;i>=0;i--){
//     if(a[i]==x){
//         printf("%d",i+1);
//         return 0;
//     }
// }
//     printf("-1");
    
//}



// A person needs to reach home by train but compulsively switches trains at every station. If they start with train arr1 at the first station, they will switch to train arr2 at the next station, and then switch back to train arr1 at the following station, and so on. Similarly, if they start with train arr2, they will switch to train arr1 at the next station, and continue alternating.

// Given two arrays, arr1 and arr2, where:

// arr1[i] represents the time taken by train arr1 at station i.
// arr2[i] represents the time taken by train arr2 at station i.
// Determine the minimum total time required to reach home starting from either train arr1 or train arr2, with the switching pattern maintained.

// Examples:
// Input: arr1 = [2, 1, 2], arr2 = [3, 2, 1]
// Output: 5
// Explanation: Starting with train arr2 yields the minimum total time of 5.
// Input: arr1 = [1, 3, 1, 2] arr2 = [2, 2, 3, 1]
// Output: 5
// Explanation: Starting with train arr1 yields the minimum total time of 5.

//Program:
#include <stdio.h>
int main(){
    int arr1[]={2,1,2};
    int arr2[]={3,2,1};
    int sum1=arr1[0],sum2=arr2[0],even=0,odd=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);

    for(int i=1;i<n;i++){
        sum1+=i%2==0?arr1[i]:arr2[i];
        sum2+=i%2==0?arr2[i]:arr1[i];

    }
    if(sum1<sum2)
    printf("%d",sum1);
    else
    printf("%d",sum2);

    return 0;
}