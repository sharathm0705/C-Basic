#include <stdio.h>
int main()
{
    int n = 8827723;
    int res=0;
    while(n!=0)
    {
       int temp = n%10;
       res ^= temp;
       n=n/10;
    }
    printf("%d",res);

    return 0;
}