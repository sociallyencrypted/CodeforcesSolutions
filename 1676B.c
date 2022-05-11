#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int min = 10000001;
        int arr[n];
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int x;
            scanf("%d", &x);
            arr[j] = x;
            min = x < min ? x : min;
        }
        for (int j = 0; j < n; j++)
        {
            sum += arr[j] - min;
        }
        printf("%d\n", sum);
    }
}