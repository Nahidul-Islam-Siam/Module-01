#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    // printf("%d\n", max);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}
