#include <stdio.h>
#include <string.h>
int main()
{
    char n[] = "4567897";
    int result = 0;

    for(int i =0 ; i<strlen(n);i++)
    {
        int temp = n[i]-48;
        result +=temp;
    }
    printf("\n%d",result);

    return 0;
}