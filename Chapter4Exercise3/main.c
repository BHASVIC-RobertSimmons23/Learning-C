#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[6] = "beans";
    int guessCount = 0;

    while (guessCount < 5) {
        char guess[6];
        printf("\nEnter a guess:");
        gets(guess);
        if(strcmp(secretWord, guess) == 0) {
            printf("\nYou guessed the secret word!!!");
            break;
        }
        else {
            for(int i = 0; i < sizeof(secretWord); ++i) {
                if(secretWord[i] == guess[i]) printf("%c", secretWord[i]);
                else printf("?");
            }
            ++guessCount;
            if(guessCount == 5) {
                printf("\nYou used up all 5 guesses :(");
            }
        }
    }
    printf("\n The secret word was %s", secretWord);

    return 0;
}
