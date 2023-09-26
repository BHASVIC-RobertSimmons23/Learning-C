#include <stdio.h>
#include <stdbool.h>

int main() {
    int inputNumber = 0, errorCheck;

    while (inputNumber != 100) {
        printf("\nEnter a number to check:");
        fflush(stdin);
        errorCheck = scanf("%d", &inputNumber);
        if(inputNumber != 100 && errorCheck != 0 && inputNumber >= 1 && inputNumber <= 100) {
            bool isMagic = (float)inputNumber * (5.0f/7.0f) < 100 || (float)inputNumber * (3.0f/7.0f) < 100;
            printf(isMagic ? "Yes %d is magic!" : "No %d is not magic", inputNumber);
        }
    }
    return 0;
}
