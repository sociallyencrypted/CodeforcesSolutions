#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int oldx = 0;
    int x = 0;
    int maxsum = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= oldx)
        {
            currsum++;
            oldx = x;
        }
        else
        {
            maxsum = (currsum > maxsum) ? currsum : maxsum;
            currsum = 1;
            oldx = x;
        }
    }
    maxsum = (currsum > maxsum) ? currsum : maxsum;
    printf("%d", maxsum);
}
