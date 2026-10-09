// Problem 09: Print Odd Numbers from 1 to N

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}
