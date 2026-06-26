#include <stdio.h>

int main()
{
    int a = 10, b = 20, temp;
    int *p = &a, *q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("a = %d\nb = %d", a, b);

    return 0;
}
