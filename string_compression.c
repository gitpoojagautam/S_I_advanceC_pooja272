#include <stdio.h>

int main()
{
    char str[] = "aaabbcccc";
    int i, j, count;

    for(i = 0; str[i] != '\0'; i = j)
    {
        count = 0;

        for(j = i; str[j] == str[i]; j++)
            count++;

        printf("%c%d", str[i], count);
    }

    return 0;
}
