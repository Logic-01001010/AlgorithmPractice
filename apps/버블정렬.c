#include <stdio.h>


void bubbleSort(int arr[], int n)
{
    
    int i, j, tmp;

    for(i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if( arr[j] > arr[j+1] )
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }

        }
    }

}

int main(void)
{
    int arr[] = {3, 5, 4, 2, 6, 1};


    bubbleSort(arr, 6);

    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}