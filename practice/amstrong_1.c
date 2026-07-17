#include <stdio.h>
#include <math.h>
int main(){
    int a,b , count=0,sum=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        count=0;
        sum=0;
        int temp=i;
        while(temp>0){
            count++;
            temp=temp/10;

        }temp=i;
        while(temp>0){
            sum=sum+pow(temp%10,count);
        temp=temp/10;
        }if(i==sum){
            printf("%d\n",i);
        }
    }
    


    return 0;
}