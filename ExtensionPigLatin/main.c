#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(unsigned char character);

int main() {
    char userInput[100] = "";

    printf("Enter a string: ");
    gets(userInput);

    bool vowelReached = false;
    char newString[100] = "";
    unsigned int length = strlen(userInput);
    for(int i = 0; i < 100; ++i) {
        unsigned char currentChar = tolower(userInput[i]);
        if(!isVowel(currentChar)  && !vowelReached) {
            newString[length] = userInput[i];
            ++length;
        } else vowelReached = true;
    }

    newString[length] = 'a';
    newString[length + 1] = 'y';
    printf("\n");
    puts(newString);

    return 0;
}

bool isVowel(unsigned char character) {
    return character == 97 || character == 101 || character ==  105 || character == 111 || character == 117;
}
