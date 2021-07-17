#include <stdio.h>

int bSearch(int arr[], int n, int target)
{
    int begin = 0;
    int end = n-1;
    int mid, var;

    while( begin <= end )
    {
        // [10, 20, 30, 40, 50, 60]
        //             ^

        mid = (begin + end) / 2;
        var = arr[mid];
        
        if( var == target )
            return mid;
        
        if(var > target)
            end = mid - 1;
        
        else if(var < target)
            begin = mid + 1; 

    }

    return -1;

}


int main(void)
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int result;

    result = bSearch(arr, 6, 40);

    printf("%d", result);

    return 0;
}