#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        char st[100];
        scanf(" %s", &st);
        char *ret;
        ret = strstr(st, "--");
        if (strstr(st, "--") != NULL)
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    printf("%d", x);
    return 0;
}