#include <stdio.h>
#include <stdbool.h>

bool askQuestion(char* question) {
    char response;
    printf("%s", question);
    fflush(stdin);
    scanf("%c", &response);
    return (response == 'Y' || response == 'y');
}

int main() {
    if(askQuestion("Do we eat it normally?")) {
        bool isSeaCreature = askQuestion("Does it live in the sea?");
        bool isMammal = askQuestion("Is it a mammal");
        if(isSeaCreature && isMammal) {

        } else {

        }
    } else {
        if (askQuestion("Is it an insect?")) {

        } else {
            if (askQuestion("Is it an insect?")) {

            }
        }
    }
    return 0;
}
