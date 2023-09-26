#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2 = 0;
    printf("Enter 2 numbers seperated by a comma: ");
    scanf("%d,%d", &num1, &num2);
    int result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    int charCode = 0;
    printf("Enter an ascii character code: ");
    scanf("%d", &charCode);
    char charFromCode = (char)charCode;
    printf("%c", charFromCode);

    return 0;
}
