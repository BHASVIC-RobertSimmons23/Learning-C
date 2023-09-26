#include <stdio.h>

int main() {
    int numData, numInputted = 0;
    float total = 0, average;
    printf("How many pieces of data would you like to enter:");
    fflush(stdin);
    scanf("%d", &numData);
    do {
        float currentData;
        printf("\nEnter data piece #%d: ", numInputted + 1);
        fflush(stdin);
        scanf("%f", &currentData);
        total += currentData;
        ++numInputted;
    } while (numInputted < numData);

    average = total / numData;
    printf("\nAverage is %f", average);
    return 0;
}
