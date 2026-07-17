#include <stdio.h>
int main()
{
        int arr[] = {7,4,9,1,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    //------Nested Loop------

    // int buy = arr[0];
    // int sell =arr[1];
    // int profit = buy - sell;

    // for(int i = 1; i<len ; i++ )
    // {
    //     for(int j =i+1 ; j<len ;j++)
    //     {
    //         int temp = arr[i]-arr[j];
    //         if(temp<profit)
    //         {
    //             profit =temp;
    //         }
    //     }
    // }

    // printf(" %d ",-1* profit);

    //--------Logic--------

    int minValue=arr[0];
    int profit, maxprofit=0;

    for(int i=0;i<len;i++)
    {
        if(arr[i]<minValue)
        {
            minValue = arr[i];
        }

        profit = arr[i] - minValue;

        if(profit>maxprofit)
        {
            maxprofit =profit;
        }
    }

    printf ("Profit : %d ", maxprofit);

    return 0;
}