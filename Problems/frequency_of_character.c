#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "MADAM";
    int len = strlen(word);
    // for (int i = 0; i < strlen(word); i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < strlen(word); j++)
    //     {
    //         if(word[i]==word[j])
    //         {
    //             count++;
    //         }
    //     }
    //     printf("\n%c : %d " , word[i] , count); 
    // }



    // ----------Using HashTable---------


    int asciiArr[256] = {0};
    int nch;
    for (int i = 0; i < len; i++)
    {
        nch = word[i];
        asciiArr[nch]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if(asciiArr[i] > 0)
        printf(" %c -> %d", i , asciiArr[i]);
    }
    
    











    return 0;
}