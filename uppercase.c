#include <stdio.h>

int main(void)
{
    char c;
    char u;
    int offset;

    scanf("%c", &c);
    offset = c - 'a';
    u = 'A' + offset;
    printf("%c", u);

    return 0;
}
