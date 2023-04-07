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
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /, s, p, a): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("Sum: %lf\n", add(num1, num2));
    }
    else if (operator == '-') {
        printf("Difference: %lf\n", subtract(num1, num2));
    }
    else if (operator == '*') {
        printf("Product: %lf\n", multiply(num1, num2));
    }
    else if (operator == '/') {
        printf("Quotient: %lf\n", divide(num1, num2));
    }
    else if (operator == 's') {
        printf("Square root of first number: %lf\n", squareRoot(num1));
    }
    else if (operator == 'p') {
        printf("First number raised to the power of second number: %lf\n", power(num1, num2));
    }

    // Average calculation feature
    else if (operator == 'a') {
        int count = 2;
        double sum = num1 + num2;
        double average;

        while (1) {
            double num;
            printf("Enter number %d (or 'q' to calculate the average): ", count + 1);
            if (scanf("%lf", &num) != 1) {
                break;
            }
            sum += num;
            count++;
        }

        if (count > 2) {
            average = sum / count;
            printf("Average of %d numbers: %lf\n", count, average);
        }
        else {
            printf("At least two numbers are required to calculate the average.\n");
        }
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
