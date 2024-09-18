#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int linearSearch(int target, const int* numArray, int length);
int binarySearch(int target, const int* numArray, int length);
float testSearch(const int* numArray, int length, int (search)(const int, const int*, const int));

int main() {
    int arrayLength = 10000;
    int numArray[arrayLength];
    srand(time(NULL));
    for(int i = 0; i < arrayLength; i++) {
        if(i == 0) numArray[i] = rand() % 20 + 1;
        else numArray[i] = numArray[i-1] + rand() % 20 + 1;
        //printf("%d) %d\n", i, numArray[i]);
    }

    //int target = -1;
    //printf("Target: ");
    //scanf("%d", &target);

    //int result = linearSearch(target, numArray, sizeof(numArray) / sizeof(numArray[0]));
    //if(result == -1) printf("\nElement not in list");
    //else printf("\n%d found at index %d", target, result);
    //result = binarySearch(target, numArray, sizeof(numArray) / sizeof(numArray[0]));
    //if(result == -1) printf("\nElement not in list");
    //else printf("\n%d found at index %d", target, result);
    float result = testSearch(numArray, sizeof(numArray) / sizeof(numArray[0]), linearSearch);
    printf("\nLinear search took an average: %f comparisons", result);
    result = testSearch(numArray, sizeof(numArray) / sizeof(numArray[0]), binarySearch);
    printf("\nBinary search took an average: %f comparisons", result);
    return 0;
}

int linearSearch(const int target, const int* numArray, int length) {
    int i = 0;
    int foundIndex = -1;
    while (foundIndex == -1 && i <= length) {
        if(numArray[i] == target) foundIndex = i;
        i++;
    }
    return i;
}

int binarySearch(int target, const int* numArray, int length) {
    int low = 0, mid, high = length - 1, foundIndex = -1, nComps = 0;
    while (foundIndex == -1 && high >= low) {
        nComps++;
        mid = (low + high) / 2;
        if(numArray[mid] < target) low = mid + 1;
        else if(numArray[mid] > target) high = mid - 1;
        else foundIndex = mid;
    }
    return nComps;
}

float testSearch(const int* numArray, int length, int (search)(const int, const int*, const int)) {
    float total;
    for(int i = 0; i < length; i++) {
        total += search(numArray[i], numArray, length);
    }
    return total / length;
}
