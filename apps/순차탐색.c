#include <stdio.h>


int search(int arr[], int n, int target)
{
    int i;
    for(i=0; i<n; i++)
        if(arr[i] == target)
            return i;

    return -1;

}

int main(void)
{
    int arr[] = {4, 6, 1, 5, 3, 2};

    int result = search(arr, 6-1, 3);

    printf("%d", result);

    return 0;
}