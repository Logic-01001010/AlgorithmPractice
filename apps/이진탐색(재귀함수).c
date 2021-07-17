#include <stdio.h>

int bSearch(int arr[], int target, int begin, int end)
{
    
    if( begin > end ) return -1;

    int mid = (begin + end) / 2;

    if( arr[mid] == target )
        return mid;
    
    else if( arr[mid] > target )
        return bSearch(arr, target, begin, mid - 1);

    else if( arr[mid] < target )
        return bSearch(arr, target, mid + 1, end);

}


int main(void)
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int result;

    result = bSearch(arr, 50, 0, 6-1);

    printf("%d", result);

    return 0;
}