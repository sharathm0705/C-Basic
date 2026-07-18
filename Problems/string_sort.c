#include <stdio.h>
int main()
{
    char *countries[3] = {"India" , "USA" , "Argentina"};
    int len = sizeof(countries) / sizeof(countries[0]);
    char *temp[1];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if(countries[j][0] > countries[j+1][0])
            {
                temp[0] = countries[j];
                countries[j] = countries[j+1];
                countries[j+1] = *temp;
            }
        } 
    }
    for (int i = 0; i < len; i++)
    {
            printf(" %s " , countries[i]);
    }
    
    return 0;
}
