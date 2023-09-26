#include <stdio.h>

int main() {
    int number;
    float decimalNumber;
    char character;
    printf("%d\n", (int)(character));
    printf("Enter an integer followed by a decimal number followed by a character:");
    scanf("%d%f%c", &number, &decimalNumber, &character);
    scanf("%c", &character)
    float sumResult = decimalNumber - (float)number;
    printf("%d\n", (int)(character));
    float multiResult = (float)character * sumResult;
    printf("The subtraction result is %f and the multiplication result is %f\n", sumResult, multiResult);
    return 0;
}
