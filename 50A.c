#include <stdio.h>

int main()
{
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int pr = m * n;
    int r;
    if (pr % 2 == 0)
    {
        r = pr / 2;
    }
    else
    {
        r = (pr - 1) / 2;
    }
    printf("%d", r);
    return 0;
}