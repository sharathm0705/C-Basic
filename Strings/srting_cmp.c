//
#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="abc";
    char str2[]="aBc";
    int n=strcmp(str1,str2);
    if(n==0){
        printf("Equal");
    }else{
        printf("Not Equal");
    }
    return 0;
}