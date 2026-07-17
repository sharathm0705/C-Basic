//Convert Capital letter to small and vise versa.
#include <stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    if(s>=65&&s<=92){
    int c=s+32;
    printf("%c",c);}
    else if(s>=97&&s<=122){
    int c=s-32;
    printf("%c",c);}
    else{
        printf("Invalid Character !!!");
    }
    return 0;
}