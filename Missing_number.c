#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 5};
    int n = 5;
    int sum = 0, total, i;

    total = n * (n + 1) / 2;

    for(i = 0; i < n - 1; i++)
        sum += a[i];

    printf("Missing Number = %d", total - sum);

    return 0;
}
