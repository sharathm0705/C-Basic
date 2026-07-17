#include <stdio.h>

int main()
{
      //-------Station Master Problem-------

    int arr[] = {900, 940, 950,1100,1500,1800};
    int dep[] = {910,1200,1120,1130,1900,2000};
    int n = 6;
    int plat = 0;
    int maxplat = 0;
    int i = 0 , j = 0;

    while(i<n && j<n)
    {
        if(arr[i] < dep[j])
        {
            plat++;
            if(plat > maxplat)
                maxplat=plat;
            i++;
        }else
        {
            plat--;
            j++;
        }
    }
    printf(" Max Platforms : %d ",maxplat);

    return 0;
}
