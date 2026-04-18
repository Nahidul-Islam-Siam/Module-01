// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
if(ch>='0' && ch<='9'){
    printf("IS DIGIT");
    } else{
        printf("ALPHA");
        {

            if(ch>='A' && ch<='Z'){
                printf("\nIS CAPITAL");
            } else{
                printf("\nIS SMALL");
            }
        }
    }
    return 0;
}