#include <stdio.h>
int main()
{
    char word[] = "MADAM";
    for (int i = 0; i < strlen(word); i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(word); j++)
        {
            if(word[i]==word[j])
            {
                count++;
            }
        }
        printf("\n%c : %d " , word[i] , count); 
    }

    return 0;
}