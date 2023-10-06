#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][30];
    for(int i = 0; i < 5; ++i) {
        printf("Enter string #%d:", i + 1);
        gets(strings[i]);
    }

    char earliestString[30];
    strcpy(earliestString, strings[0]);
    for(int i = 0; i < 5; ++i) {
        if(strcmp(earliestString, strings[i]) > 0) strcpy(earliestString, strings[i]);
    }
    printf("Earliest alphabetical string: %s", earliestString);
    return 0;
}
