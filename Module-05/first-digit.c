#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    
    // Extract the first digit
    while (num >= 10) {
        num /= 10; // Remove the last digit
    }
    
    printf("%d", num); // Print the first digit
    return 0;
}