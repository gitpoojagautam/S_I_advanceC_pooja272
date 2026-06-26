#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7, k = 50;
    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == k)
        {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(k > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
