#include <stdio.h>
int main(){
/*Condition for leap year:
 Century year should be divisible by 400 and non centure year should be divisible by 4;*/
int year;
scanf("%d",&year);
if((year%400==0)||(year%100!=0)&&(year%4==0)){
        printf("Leap Year");
}else{
    printf("Not Leap Year");
}
    return 0;
}

