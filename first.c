#include <stdio.h>
#include <stdbool.h>
int main()
{
int a = 10;
int b = 20;
int sum = a + b;
printf("Sum: %d\n", sum);
int sub = b - a;
printf("Subtraction: %d\n", sub);

int mul = a * b;
printf("Multiplication: %d\n", mul);

int div = b / a;
printf("Division: %d\n", div);
    return 0;
}