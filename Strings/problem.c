//Convert Capital letter to small and vise versa using strings :
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char str2[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
    if(str[i]>=65&&str[i]<=90){
    int c=str[i]+32;
    printf("%c",c);}
    else if(str[i]>=97&&str[i]<=122){
    int c=str[i]-32;
    printf("%c",c);}
    
    else{
    int c=str[i];
    printf("%c",c);
    }
    }
    return 0;
}