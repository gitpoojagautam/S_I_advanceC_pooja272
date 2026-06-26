#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n = 153;

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
