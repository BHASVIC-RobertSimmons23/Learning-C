#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* string1, char* string2);

int main() {
    char string1[100] = "", string2[100] = "";
    puts("Enter string 1: ");
    gets(string1);
    puts("Enter string 2: ");
    gets(string2);

    bool result = isAnagram(string1, string2);
    printf("\n\"%s\" and \"%s\" are", string1, string2);
    printf(result ? " anagrams of each other" : " are not anagrams");
    return 0;
}

bool isAnagram(char* string1, char* string2) {
    char avaliableCharacters[100];
    strcpy(avaliableCharacters, string2);
    unsigned int length = strlen(string1);
    if(length != strlen(string2)) return false;
    
    for(int i = 0; i < length; ++i) {
        char currentChar = string1[i];
        bool found = false;
        for(int j = 0; j < length; ++j) {
            if(avaliableCharacters[j] == currentChar) {
                found = true;
                avaliableCharacters[j] = '\000';
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}