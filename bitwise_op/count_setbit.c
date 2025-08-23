//To count number of set bits in a given number;
#include <stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    while(n>0){
      int r=n%2;
      if(r==1){
        count++;
      }n=n/2;

    }
    printf("%d/n",count);



    return 0;
}