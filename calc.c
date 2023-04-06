#include <stdio.h>
#include <math.h>

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    return x / y;
}

// Function to find the square root of a number
double squareRoot(double x) {
    return sqrt(x);
}

// Function to find the power of a number
double power(double x, double m) {
    return pow(x, m);
}

int main() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform various operations
    printf("Sum: %lf\n", add(num1, num2));
    printf("Difference: %lf\n", subtract(num1, num2));
    printf("Product: %lf\n", multiply(num1, num2));
    printf("Quotient: %lf\n", divide(num1, num2));
    printf("Square root of first number: %lf\n", squareRoot(num1));
    printf("First number raised to the power of second number: %lf\n", power(num1, num2));

    return 0;
}
