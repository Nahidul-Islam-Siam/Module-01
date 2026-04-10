#include <stdio.h>

int main() {
    int A;
    long long B;
    double C;
    char D;

    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%lf", &C);
    scanf(" %c", &D);  // space used to ignore newline

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2lf\n", C);  // 2 decimal points
    printf("%c\n", D);

    return 0;
}