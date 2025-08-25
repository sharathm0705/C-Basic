#include <stdio.h>
void nami(void);
void robin(void);
int main(){
    printf("Luffy is in his home\n");
    robin();
    printf("Luffy is back to his home\n");

    return 0;
}
void nami(){
    printf("He had tea with nami\n");
}
void robin(){
    printf("Robin is preparing coffe\n");
    nami();
    printf("He had coffee with Robin\n");
}