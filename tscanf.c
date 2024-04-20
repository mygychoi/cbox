#include <stdio.h>

int main(void)
{
    int a, b;
    float c, d;
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("%5d %5d %5.2f %5.2e", a, b, c, d);
    scanf("%d/%d", &a, &b);
    printf("%d %d", a, b);
}
