#include <stdio.h>

int main(void)
{
    unsigned long until;
    unsigned long sum = 0ul;

    scanf("%lu", &until);
    for (; until >= 1; until--)
    {
        sum += until;
    }
    printf("%lu", sum);

    return 0;
}
