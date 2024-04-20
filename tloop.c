#include <stdio.h>

int main(void)
{
    int num;
    int sum;
    for (num = 1, sum = 0; num <= 10; num++)
    {
        sum += num;
    }
    {
    }
    printf("%d %d", num, sum);

    return 0;
}
