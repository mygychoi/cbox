#include <stdio.h>

int main(void)
{
    while (getchar() != '\n')
        ;

    char c;
    while ((c = getchar()) == ' ')
        ;
    printf("%c", c);

    return 0;
}
