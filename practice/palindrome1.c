#include <stdio.h>
int main(){
    
    for(int i=1000;i<=10000;i++){
        int temp=i,rev=0;
        while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;}
        if(rev==i){
            printf("%d\n",rev);
        }
    }
    

    return 0;
}