#include <stdio.h>
int main(){
    int n,first,second,third;
    scanf("%d",&n);
    if(n==1){
        printf("0");
    }else if(n==2){
        printf("1");
    }else{
    first=0;
    second=1;
    for(int i=1;i<=n-2;i++){
        third=first+second;
        first=second;
        second=third;
        
    }
printf("%d\n",third);

}
    return 0;
}






