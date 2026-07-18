#include <stdio.h>
#include <string.h>
int main()
{
        char word1[] = "SILENT";
    char word2[] = "LISTEN";
    int len = strlen(word1);
    int ascii[256] = {0};

    if(strlen(word1) != strlen(word2))
    {
        printf("Not Anagram");
        return 0;
    }

    int w1;
    int w2;
    for (int i = 0; i < len; i++)
    {
        w1 = word1[i];
        ascii[w1]++;

        w2 = word1[i];
        ascii[w2]--;
    }
    
    int flag = 0 ;
    for (int i = 0; i < 256; i++)
    {
        if(ascii[i]!=0)
        {
        flag = 1;
        break;
        }
    }
    if(flag == 1)
    {
        printf(" Not Anagram ");
    }
    else 
    {
        printf(" Anagram ");
    }

    return 0;
}