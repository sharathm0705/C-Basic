// #include <stdio.h>
// int main(){
//     int a=5;
//     int *ptr = &a;
//     printf("%u",
//         ptr);
//     return 0;
// }



// Double and Triple Pointer :
// #include <stdio.h>
// int main(){
//     int n=5;
//     int *p=&n;
//     int **q=&p;
//     int ***r=&q;
//     printf("%d",***r);
//     return 0;
// }



#include <stdio.h>
void fun(int *n);
int main(){
    int n=5;
    fun(&n);
    printf("%d",n);
    return 0;
}
void fun(int *n){
    *n=6;
}



