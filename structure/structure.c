#include <stdio.h>
struct student
{
    int roll_no;
    float percentage;
    char section;
};

int main(){
    struct student s1;
    s1.roll_no=81;
    s1.percentage=93.2;
    s1.section='B';
    printf("Roll No : %d\n",s1.roll_no);
    printf("Percentage : %f\n",s1.percentage);
    printf("Section : %c\n",s1.section);

    return 0;
}