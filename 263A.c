#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            scanf("%d", &x);
            if (x == 1)
            {
                printf("%d", abs(2 - i) + abs(2 - j));
                return 0;
            }
        }
    }
}