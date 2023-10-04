#include <stdio.h>

void testCount(int num);

int main() {
    int userInput;
    printf("Enter number to count to: ");
    scanf("%d", &userInput);
    testCount(userInput);
    printf("\nVoid procedure complete");
    return 0;
}

void testCount(int num) {
    for(int i = 0; i < num; ++i) {
        printf("\n%d", i + 1);
    }
}