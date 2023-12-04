#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool isValid(char* s);

int main() {
    isValid("{[]}");
    return 0;
}

bool isValid(char* s) {
    char lastOpened;
    for(int i = 0; i < strlen(s); ++i) {
        char current = s[i];
        if(current == '(' || current == '{' || current == '[') lastOpened = current;
        else if (current == ')' && lastOpened != '(' || current == '}' && lastOpened != '{' || current == ']' && lastOpened != '[') return false;
    }
    return true;
}

int singleNumber(int* nums, int numsSize) {
    int unique = 0;
    for(int i = 0; i < numsSize; ++i) {
        unique = unique ^ nums[i];
    }
    return unique;
}

bool isPowerOfTwo(int n) {
    double result = (log(n) / log(2));
    return result % 1 == 0;
}