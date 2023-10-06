#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeVowels(char* string);


int main() {
    char userInput[100] = "";
    printf("Enter a string to remove vowels from: ");
    gets(userInput);
    removeVowels(userInput);
    printf("\nResult: %s", userInput);
    return 0;
}

void removeVowels(char* string) {
    char newString[100] = "";
    int j = 0;
    for(int i = 0; i < 100; ++i) {
        int lower = tolower(string[i]);
        if(!(lower == 97 || lower == 101 || lower == 105 || lower == 111 || lower == 117)) {
            newString[j] = string[i];
            ++j;
        }
    }
    strcpy(string, newString);
}
