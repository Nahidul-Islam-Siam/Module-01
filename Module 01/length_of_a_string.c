#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("Length of the string is: %d\n", strlen(s));
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     char s[100];
//     scanf("%s", s);
//     int count = 0;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("Length of the string is: %d\n", count);
// }