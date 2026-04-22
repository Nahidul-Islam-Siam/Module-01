// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//     {
//         ch = ch - 32;
//         printf("%c", ch);
//     }
//     else
//     {
//         ch = ch + 32;
//         printf("%c", ch);
//         return 0;
//     }
// }


#include<stdio.h>


int main() {
    int n;
    scanf("%d", &n);



    int a[n];  
    int sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }


    for (i = 0; i < n; i++) {
        sum = sum + a[i];  
    }

    printf("%d", sum); 

    return 0;
}