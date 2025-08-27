// #include <stdio.h>
// int main(){
//     int a=5;
//     int *ptr = &a;
//     printf("%p",ptr);
//     return 0;
// }



//Double and Triple Pointer :
#include <stdio.h>
int main(){
    int n=5;
    int *p=&n;
    int **q=&p;
    int ***r=&q;
    printf("%d",***r);
    return 0;
}



