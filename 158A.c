#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (arr[k - 1] == 0)
    {
        k--;
    }
    for (int j = k; j < n; j++)
    {
        if (arr[j] == arr[k - 1])
        {
            k++;
        }
    }
    printf("%d", k);
    return 0;
}