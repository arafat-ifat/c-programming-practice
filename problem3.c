// Problem 03: Sum of Numbers from 1 to N

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
