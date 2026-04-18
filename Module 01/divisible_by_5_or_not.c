// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
#include <stdio.h>

int main()
{
    int X ;
    scanf("%d", &X);
    int first_digit = X/1000;
    // printf("%d", first_digit);

    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
