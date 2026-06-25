#include <stdio.h>

int main()
{
    int a[] = {64, 34, 25, 12, 22};
    int n = 5;
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
