//The number whose number of factor as equal to square root of that number
#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int count=0;{
            for(int j=1;j<=i;j++)
        
        if(i%j==0){
            count++;
        }
    if(count==sqrt(i)){
        printf("%d\n",i);
    }
    }
    }
    return 0;
}