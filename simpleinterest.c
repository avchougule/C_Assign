#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // User input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest Calculation
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}