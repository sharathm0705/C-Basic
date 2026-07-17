#include <stdio.h>
int main()
{
        short int a = 9786;
    short int b = 885;
    short int temp1=0;
    short int temp2=0;
    short int count = 0;
    short int carry = 0;

    while(a !=0 || b !=0)
    {
        temp1 = a%10;
        temp2 = b%10;
        short int add = temp1+temp2+carry;
        if((add) > 9)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        a = a/10;
        b = b/10;
    }
    printf("%d",count);
    return 0;
}