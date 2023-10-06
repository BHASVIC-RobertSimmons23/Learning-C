#include <stdio.h>

int countTargetCharacter(const char *string, char target);

int main() {
    char string1[100] = "", string2[100] = "", target;
    printf("Enter string 1:");
    fflush(stdin);
    gets(string1);
    printf("\nEnter string 2:");
    fflush(stdin);
    gets(string2);

    printf("\nWhat character would you like to count: ");
    fflush(stdin);
    scanf("%c", &target);

    int targetCount1 = countTargetCharacter(string1, target);
    int targetCount2 = countTargetCharacter(string2, target);
    int targetTotal = targetCount1 + targetCount2;
    printf("There are %d %c's in total!", targetTotal, target);
    if(targetCount1 > targetCount2) printf("\nString 1 has %d more %c's than string 2", targetCount1 - targetCount2, target);
    else if (targetCount1 < targetCount2) printf("\nString 2 has %d more %c's than string 1", targetCount2 - targetCount1, target);
    else printf("\nBoth strings have the same number of %c's!", target);
    return 0;
}


int countTargetCharacter(const char *string, char target) {
    int count = 0;
    for(int i = 0; i < sizeof(string); ++i) {
        if(string[i] == target) ++count;
    }
    return count;
}
