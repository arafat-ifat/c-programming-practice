// Problem 13: Count Even Numbers from 1 to N

#include <stdio.h>

int main()
{
    int n, i = 2, count = 0;

    scanf("%d", &n);

    while(i <= n)
    {
        count++;
        i = i + 2;
    }

    printf("%d", count);

    return 0;
}
