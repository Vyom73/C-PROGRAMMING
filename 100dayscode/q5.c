// Q5 (User Inputs, Operations & Output)
// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float c;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    float f = (c * 9/5) + 32;

    printf("Fahrenheit=%.0f", f);

    return 0;
}

