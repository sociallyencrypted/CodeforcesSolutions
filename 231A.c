#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c > 1)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}