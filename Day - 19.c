// write a program to calculate multiply of first n numbers
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; // Use unsigned long long to handle large results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        product *= i; // Multiply each number
    }

    printf("The product of the first %d natural numbers is %llu\n", n, product);
    return 0;
}