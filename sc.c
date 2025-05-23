#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover whitespace

    // Prompt the user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);


        return 0;
}

