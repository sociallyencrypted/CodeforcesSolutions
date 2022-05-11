#include <stdio.h>
#include <stdlib.h>

int sm(int x)
{
    int r = (((x / 10) % 10) + (x % 10) + (x / 100));
    return r;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int r = 0; r < n; r++)
    {
        int x1;
        int x;
        scanf("%d", &x);
        x1 = x % 1000;
        x = x / 1000;
        int sum = sm(x) - sm(x1);
        if (sum != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}