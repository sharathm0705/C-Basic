//To copy one string to another string :
//Manual method :

#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="abcde";
    char str2[6];
    for(int i=0;i<strlen(str1);i++)
    str2[i]=str1[i];
    str2[6]='\0';
    printf("%s",str2);
    return 0;
}


//Using Library function
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[]="abcde";
// char str2[5];
// strcpy(str2,str1);
// printf("%s",str2);

// return 0;
// }

