#include <stdio.h>


int search(int arr[], int begin, int end, int target)
{
    if( begin > end )
        return -1;

    if( arr[begin] == target )
        return begin;
    else
        return search(arr, begin+1, end, target);

}

int main(void)
{
    int arr[] = {4, 6, 1, 5, 3, 2};

    int result = search(arr, 0, 6-1, 3);

    printf("%d", result);

    return 0;
}