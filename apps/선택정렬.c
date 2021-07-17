#include <stdio.h>


void selectionSort(int arr[], int n)
{
    int i, j, tmp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }

        }

    }

}

int main(void)
{
    int arr[] = {3, 5, 4, 2, 6, 1};


    selectionSort(arr, 6);

    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}