#include <stdio.h>

int main() {
    char upperCaseChar = 0;
    while(upperCaseChar < 65 || upperCaseChar > 90) {
        printf("Enter an upper case character:");
        scanf("%c", &upperCaseChar);
        printf("\n");
    }
    char lowerCaseChar = upperCaseChar + 32;
    printf("The lower case version: %c", lowerCaseChar);
    return 0;
}
