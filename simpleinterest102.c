#include <stdio.h>
//Program for simple interest

int void() {
    float principal, rate, time, simpleInt;

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

   
    simpleInt = (principal * rate * time) / 100;

   
    printf("Simple Interest = %f\n", simpleInt);

}