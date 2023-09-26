#include <stdio.h>
#include <stdlib.h>


int main() {
    int value1 = 0, value2 = 0, value3 = 0, check;
    printf("Enter 3 numbers: ");
    fflush(stdin); //Clears the input buffer
    check = scanf("%d%d%d", &value1, &value2, &value3);
    printf("scanf returned: %d\n", check);
    printf("%d %d %d", value1, value2, value3);
    return 0;
}

/*
 * scanf returns the number of data values that were successfully written to memory before finishing or reaching a value that is formatted incorrectly
 * regardless of if there are further values that follow the correct formatting.
 */
