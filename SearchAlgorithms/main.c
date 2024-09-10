#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int linearSearch(int target, const int* numArray, int length);

int main() {
    int numArray[50];
    int first = 0, last = 49, value = 0;
    bool found = false;
    srand(time(NULL));
    for(int i = 0; i < last + 1; i++) {
        numArray[i] = rand() & 500;
        printf("%d) %d\n", i, numArray[i]);
    }

    int target = -1;
    printf("Target: ");
    scanf("%d", &target);

    int result = linearSearch(target, numArray, sizeof(numArray) / sizeof(numArray[0]));
    if(result == -1) printf("Element not in list");
    else printf("%d found at index %d", target, result);
    return 0;
}

int linearSearch(int target, const int* numArray, int length) {
    int i = 0;
    int foundIndex = -1;
    while (foundIndex == -1 && i <= length) {
        if(numArray[i] == target) foundIndex = i;
        i++;
    }
    return foundIndex;
}
