#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    float num1, num2, result;
    int success = 1, errorCheck;
    char operator;

    printf("Enter 2 integers seperated by a comma:");
    fflush(stdin);
    errorCheck = scanf("%f,%f", &num1, &num2);
    if (errorCheck != 2) {
        printf("You didn't enter 2 valid numbers!");
        return 0;
    }
    printf("What operation would you like to do (+, -, *, /)");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("%c is not a valid operator!", operator);
            success = 0;
            break;
    }

    if(success) printf("The result of %f %c %f = %f", num1, operator, num2, result);
    return 0;
}

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
    return num1 / num2;
}
