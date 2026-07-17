//Linear Search :

#include <stdio.h>
int main(){
int a[]={2,4,1,65,34,12};
int n=sizeof(a)/sizeof(a[0]);
int key;
scanf("%d",&key);
for(int i=0;i<n;i++){
    if(a[i]==key){
        printf("%d",i);
        return 0;
    }
}
    printf("-1");
    

}