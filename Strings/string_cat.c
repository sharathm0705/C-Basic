//String Concatenatin :

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100]="abc";
    char str2[100]="def";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}