#include <stdio.h>

int main(void)
{
    int t;
    int m1, m2, m3, m4, m5;
    int p1, p2, p3, p4, p5;
    int c;

    int r;

    scanf("%1d", &t);
    scanf("%1d%1d%1d%1d%1d", &m1, &m2, &m3, &m4, &m5);
    scanf("%1d%1d%1d%1d%1d", &p1, &p2, &p3, &p4, &p5);
    scanf("%1d", &c);

    r = 3 * (t + m2 + m4 + p1 + p3 + p5) + (m1 + m3 + m5 + p2 + p4) - 1;
    r = 9 - r % 10;

    printf("%d %d", c, r);

    return 0;
}
