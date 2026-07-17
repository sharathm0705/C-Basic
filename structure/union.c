#include <stdio.h>
union student
{
    int roll_no;
    float percentage;
    char section;
};

int main(){
    union student s1;
    s1.roll_no=81;
    printf("Roll No : %d\n",s1.roll_no);
    s1.percentage=93.2;
    printf("Percentage : %f\n",s1.percentage);
    s1.section='B';
    printf("Section : %c\n",s1.section);

    return 0;
}