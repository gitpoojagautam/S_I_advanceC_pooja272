#include <stdio.h>
int main()
{
    int swap, num1 = 4, num2 = 5;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);
    return 0;

}
