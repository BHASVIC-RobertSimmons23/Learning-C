#include <stdio.h>

int askQuestion(char* question) {
    char response;
    printf("%s", question);
    fflush(stdin);
    scanf("%c", &response);
    return (response == 'Y' || response == 'y');
}

int main() {
    if(askQuestion("Do we eat it normally?")) {
        if(askQuestion("Does it live in the sea?")) {

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
