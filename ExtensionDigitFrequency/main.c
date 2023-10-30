#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[1000];
    int count[10] = { };
    gets(string);
    for(int i = 0; i < strlen(string) + 1; ++i) {
        if(isdigit(string[i])) {
            count[string[i] - '0']++;
        }
    }
    for(int i = 0; i < 10; ++i) {
        printf("%d ", count[i]);
    }
    return 0;
}
