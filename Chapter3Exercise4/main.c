#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkArmstrongNumber(int number) {
    int sumOfCubes = 0, tempNum = number;
    if(number < 10) return number * number * number;
    while(tempNum > 0) {
        int digit = tempNum % 10;
        sumOfCubes += digit * digit * digit;
        tempNum /= 10;
    }
    return sumOfCubes == number;
}


int main() {
    int programOption;
    printf("What program would you like to run (1 -> Check number or 2 -> Show range):");
    fflush(stdin);
    scanf("%d", &programOption);
    if(programOption == 1) {
        int numToCheck;
        printf("Enter a number to check:");
        fflush(stdin);
        scanf("%d", &numToCheck);
        printf("\n%d", numToCheck);
        if (checkArmstrongNumber(numToCheck)) printf(" is an Armstrong number!");
        else printf(" is not an Armstrong number :(");
    } else if (programOption == 2) {
        int start, end;
        printf("\nEnter the range of numbers you want to check (format: start, end) :");
        fflush(stdin);
        scanf("%d,%d", &start, &end);
        printf("\nAll the Armstrong numbers from %d-%d:\n", start, end);
        for(int i = start; i <= end; ++i) if(checkArmstrongNumber(i)) printf("%d, ", i);
    }

    return 0;
}
