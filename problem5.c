// Problem 08: Print Even Numbers from 1 to N

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}
