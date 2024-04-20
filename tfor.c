#include <stdio.h>

int main(void)
{
    int i;
    int n = 10;

    // 0 -> n-1
    for (i = 0; i < n; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    // 1 -> n
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    // n-1 -> 0
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    // n -> 1
    for (i = n; i > 0; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    return 0;
}
