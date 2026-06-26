#include <stdio.h>

int main()
{
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];
    int *p1 = &a[0][0];
    int *p2 = &b[0][0];
    int *p3 = &c[0][0];
    int i;

    for(i = 0; i < 4; i++)
        *(p3 + i) = *(p1 + i) + *(p2 + i);

    for(i = 0; i < 4; i++)
    {
        printf("%d ", *(p3 + i));

        if((i + 1) % 2 == 0)
            printf("\n");
    }

    return 0;
}
