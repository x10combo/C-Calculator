#include <stdio.h>
#include <math.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: division by zero!\n");
        return 0;
    }
    return num1 / num2;
}

float square_root(float num) {
    if (num < 0) {
        printf("Error: square root of a negative number!\n");
        return 0;
    }
    return sqrt(num);
}

float power(float num, int exponent) {
    return pow(num, exponent);
}

int main() {
    int choice;
    float num1, num2, result;
    int exponent;

    printf("Please select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");

    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    } else if (choice == 5) {
        printf("Enter a number: ");
        scanf("%f", &num1);
    } else if (choice == 6) {
        printf("Enter a number and an exponent: ");
        scanf("%f %d", &num1, &exponent);
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    if (choice == 1) {
        result = add(num1, num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 2) {
        result = subtract(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 3) {
        result = multiply(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 4) {
        result = divide(num1, num2);
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 5) {
        result = square_root(num1);
        printf("sqrt(%.2f) = %.2f\n", num1, result);
    } else if (choice == 6) {
        result = power(num1, exponent);
        printf("%.2f^%d = %.2f\n", num1, exponent, result);
    }

    return 0;
}
