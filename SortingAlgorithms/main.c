#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void printArray(int* array, int length);
void bubbleSort(int* array, int length, bool verbose);
void quickSort(int* array, int start, int end);
void insertionSort(int* array, int length, bool verbose);
void mergeArrays(const int* left, int lenLeft, const int* right, int lenRight, int* output);
void mergeSort(const int* array, int length, int* output);

int main() {
    int arrayLength = 10000;
    int numArray1[arrayLength];
    int numArray2[arrayLength];
    srand(time(NULL));
    for(int i = 0; i < arrayLength; i++) {
        int random = rand() % 500 + 1;
        numArray1[i] = random;
        numArray2[i] = random;
    }
    printArray(numArray1, arrayLength);

    //int output[arrayLength];
    //mergeSort(numArray1, arrayLength, output);
    //printf("\n");
    //printArray(output, arrayLength);

    quickSort(numArray1, 0, arrayLength - 1);
    //insertionSort(numArray1, arrayLength, false);
    //bubbleSort(numArray2, arrayLength, false);
    printf("\n\n");
    printArray(numArray1, arrayLength);
    return 0;
}

void printArray(int* array, int length) {
    for(int i = 0; i < length; i++) printf("%d, ", array[i]);
}

void bubbleSort(int* array, int length, bool verbose) {
    int pass = 0;
    int nSwaps = 0;
    bool swapped = true;
    // Continue while swaps were made in the last pass or until we have made length - 1 passes
    while(swapped && pass < length - 1) {
        swapped = false;
        // Iterate until the length - pass th item of the array
        for(int j = 0; j < length - pass - 1; j++) {
            // Swap items if the first is smaller than the second
            if(array[j] > array[j + 1]) {
                swapped = true;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                nSwaps++;
            }
        }
        if(verbose) {
            printf("\n\nPass %d: ", pass);
            printArray(array, length);
        }
        pass++;
    }
    printf("\nBubble sort used: %d swaps", nSwaps);
}

void insertionSort(int* array, int length, bool verbose) {
    int nSwaps = 0;
    for(int i = 1; i < length; i++) { // Loops through array, i indicates the first unsorted item
        int j = i;
        int current = array[i]; // Store current item in a temporary variable
        while(j > 0 && array[j - 1] > current) { // Start iterating from j downwards until array[j - 1] is less than the current item
            if(verbose) printf("\nReplaced %d with %d: ", array[j], array[j - 1]);
            array[j] = array[j - 1]; // Swap items whilst going down to create space
            j--;
            nSwaps++;
            if(verbose) printArray(array, length);
        }
        if(verbose) printf("\nInserting %d, overwriting %d: ", current, array[j]);
        array[j] = current; // Place the current item in the correct spot
        if(verbose) printArray(array, length);
    }
    printf("\nInsertion sort used: %d swaps", nSwaps);
}

void mergeSort(const int* array, int length, int* output) {
    if(length <= 1) {
        // Base case
        output[0] = array[0];
        return;
    };

    // Determine size of each half
    int leftSize = length / 2;
    int rightSize = length - leftSize;

    int left[leftSize];
    int leftIndex = 0;
    int right[rightSize];
    int rightIndex = 0;

    // Add elements to the correct half
    for(int i = 0; i < length; i++) {
        if(i < leftSize) {
            left[leftIndex] = array[i];
            leftIndex++;
        } else {
            right[rightIndex] = array[i];
            rightIndex++;
        }
    }

    // Recursively call the mergeSort method, splitting the list down
    int newLeft[leftSize];
    mergeSort(left, leftSize, newLeft);
    int newRight[rightSize];
    mergeSort(right, rightSize, newRight);

    // Merge the results of the split arrays
    mergeArrays(newLeft, leftSize, newRight, rightSize, output);
}

void mergeArrays(const int* left, int lenLeft, const int* right, int lenRight, int* output) {
    int indexLeft = 0;
    int indexRight = 0;
    int outputIndex = 0;

    // Whilst there is still elements in one of the arrays
    while(indexLeft < lenLeft && indexRight < lenRight) {
        // Compare the first remaining items
        if(left[indexLeft] < right[indexRight]) {
            output[outputIndex] = left[indexLeft];
            indexLeft++;
        } else {
            output[outputIndex] = right[indexRight];
            indexRight++;
        }
        outputIndex++;
    }

    // Add any remaining items from the arrays now that one is empty (one of these loops will not run at all)
    for(int i = indexLeft; i < lenLeft; i++) {
        output[outputIndex] = left[i];
        outputIndex++;
    }
    for(int i = indexRight; i < lenRight; i++) {
        output[outputIndex] = right[i];
        outputIndex++;
    }
}


void quickSort(int* array, int start, int end) {
    if(start >= end) return;

    int pivot = array[start];
    int low = start + 1;
    int high = end;
    bool finished = false;

    while(!finished) {
        while(low <= high && array[low] <= pivot) low++;
        while(low <= high && array[high] >= pivot) high--;

        if(low <= high) {
            int temp = array[low];
            array[low] = array[high];
            array[high] = temp;
        } else finished = true;
    }

    array[start] = array[high];
    array[high] = pivot;
    quickSort(array, start, high - 1);
    quickSort(array, high + 1, end);
}