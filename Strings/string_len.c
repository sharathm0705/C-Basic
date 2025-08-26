//To fing length of the string :
//Manual method ;

#include <stdio.h>
int main(){
    char str[]="abcde";
    int i=0,count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}



//Using Library function
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="abcde";
//     int n=strlen(str);
//     printf("%d",n);
//     return 0;
// }