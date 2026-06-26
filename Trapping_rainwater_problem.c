#include <stdio.h>

int main()
{
    int a[] = {3,0,2,0,4};
    int n = 5;
    int i, j;
    int left, right;
    int water = 0;

    for(i = 1; i < n - 1; i++)
    {
        left = a[i];
        right = a[i];

        for(j = 0; j < i; j++)
        {
            if(a[j] > left)
                left = a[j];
        }

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > right)
                right = a[j];
        }

        if(left < right)
            water += left - a[i];
        else
            water += right - a[i];
    }

    printf("Trapped Water = %d", water);

    return 0;
}
