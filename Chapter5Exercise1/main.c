#include <stdio.h>

int divEleven (int num);

int main() {
    int userInput;
    printf("Enter an integer value:");
    scanf("%d", &userInput);
    int result = divEleven(userInput);
    printf("\nResult: %d", result);
    return 0;
}

int divEleven(int num) {
    return num / 11;
}
