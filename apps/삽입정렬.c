#include <stdio.h>


void insertionSort(int arr[], int n)
{
    
    int i, j, tmp;
    for(i=0; i<n; i++)
    {
        for(j = i + 1; j > 0 && arr[j] < arr[j-1]; j--)
        {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
        }

    }

}

int main(void)
{
    int arr[] = {3, 5, 4, 2, 6, 1};


    insertionSort(arr, 6);

    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}