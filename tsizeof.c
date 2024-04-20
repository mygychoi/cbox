#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    printf("%lu\n", sizeof(bool));
    printf("%lu\n", sizeof(size_t));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));

    return 0;
}
