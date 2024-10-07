#include <stdio.h>

int main() {
    int X; // Starting time in PM

    // Input the starting time
    printf("Enter the starting time (in PM, as an integer): ");
    scanf("%d", &X);

    // Calculate the finishing time
    int finishTime = X + 3;

    // Check if he can finish before 10 PM
    if (finishTime < 10) {
        printf("Janmansh will be able to complete all assignments on time.\n");
    } else {
        printf("Janmansh will NOT be able to complete all assignments on time.\n");
    }

    return 0;
}