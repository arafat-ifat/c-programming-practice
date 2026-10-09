// Problem 10: Print Squares from 1 to N

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}
