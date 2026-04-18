// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++; // Post-increment: y gets the value of x (10), then x is incremented to 11
//     int z = ++y;

//     printf("Value of x: %d\n", x);
//     printf("Value of y: %d\n", y); 
//     printf("Value of z: %d\n", z++); 
//     printf("Value of z after post-increment: %d\n", z);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int x = 10;
    ++x;
    printf("Value of x after pre-increment: %d\n", ++x); // x is now 11
}


