#include <stdio.h>

int main()
{
    int player, pass;
    scanf("%d %d", &player, &pass);

    int result = pass % player;

    if (result == 0)
    {
        result = player;
    }

    printf("%d\n", result);

    return 0;
}
