#include <stdio.h>
int main()
{
    int arr[] = {6,3,1,8,9,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}