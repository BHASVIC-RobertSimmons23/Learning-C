#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[80] = "";
    int vowelCount = 0, consonantCount = 0;
    printf("Enter a string to check: ");
    fflush(stdin);
    gets(string);
    for(int i = 0; i < sizeof(string); ++i) {
        int lower = tolower(string[i]);
        if(lower >= 97 && lower <= 122) {
            // printf("\n%d %d %c", i, lower, string[i]);
            if(lower == 97 || lower == 101 || lower == 105 || lower == 111 || lower == 117) ++vowelCount;
            else ++consonantCount;
        }
    }

    printf("\nThere was %d vowels and %d consonants in that string!", vowelCount, consonantCount);
    return 0;
}
