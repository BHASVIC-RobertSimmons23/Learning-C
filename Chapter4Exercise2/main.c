#include <stdio.h>
#include <stdbool.h>

int main() {
    int pattern[3], sum = 0;
    bool isValid = true;
    for(int i = 0; i < 3; ++i) {
        printf("\nEnter number %d:", i + 1);
        fflush(stdin);
        scanf("%d", &pattern[i]);
    }

    for (int i = 0; i < 3; ++i) {
        sum += pattern[i];
        if (pattern[i] == pattern[i-1] - 1 || (i == 2 && pattern[i] == pattern[0] + 1)) isValid = false;
    }
    if (sum % 3 != 0) isValid = false;

    printf("\nThe number %d%d%d is", pattern[0], pattern[1], pattern[2]);
    printf(isValid ? " a valid siteswap pattern" : " not a valid siteswap pattern");
    return 0;
}
