#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* string) {
    unsigned int length = strlen(string);
    char withoutWhitespace[100] = "";
    for(int i = 0, j = 0; i < length; ++i) {
        if(string[i] != ' ') {
            withoutWhitespace[j] = string[i];
            ++j;
        }
    }
    length = strlen(withoutWhitespace);
    for(unsigned int i = length - 1, j = 0; j < length; --i, ++j) {
        if (withoutWhitespace[j] != withoutWhitespace[i]) return false;
    }
    return true;
}

int main() {
    char userInput[100];
    printf("Enter a string: ");
    gets(userInput);
    bool result = isPalindrome(userInput);
    puts(result ? "Is a palindrome" : "Is not a palindrome");
    return 0;
}
