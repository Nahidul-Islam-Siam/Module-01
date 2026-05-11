// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.
#include <stdio.h>
int main()
{
    char s[1000005];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\\' && s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}
