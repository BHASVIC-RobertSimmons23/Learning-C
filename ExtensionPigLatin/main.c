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
    unsigned int length = strlen(userInput), bufferLength = 0, newLength = 0;
    char endBuffer[100] = "";
    for(int i = 0; i < 100; ++i) {
        unsigned char currentChar = tolower(userInput[i]);
        if(!isVowel(currentChar)  && !vowelReached) {
            endBuffer[bufferLength] = userInput[i];
            ++bufferLength;
        } else if(isalpha(currentChar) != 0) {
            newString[newLength] = userInput[i];
            newLength++;
            vowelReached = true;
        }
    }

    for(unsigned int i = newLength, j = 0; i < newLength + bufferLength && j < bufferLength; ++i, ++j) {
        newString[i] = endBuffer[j];
    }

    newLength += bufferLength;
    newString[newLength++] = 'a';
    newString[newLength] = 'y';
    printf("\n");
    puts(newString);

    return 0;
}

bool isVowel(unsigned char character) {
    return character == 97 || character == 101 || character ==  105 || character == 111 || character == 117;
}
