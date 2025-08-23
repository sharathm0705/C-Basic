
//Check wether the position of given bit is set or not set;
#include <stdio.h>
int main(){
    int n,k,r=0,count = 0;
    scanf("%d%d",&n,&k);
    while(n>0){
      r=n%2;
      count++;
      if(k==count){
        break;
      }n=n/2;

    }if(count<k){
        printf("Not set");
      }else if(r==1)
      printf("Set Bit");
      else
      printf("not set");
    



    return 0;
}