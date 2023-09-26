#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seeds randomness using current datetime.
    fflush(stdin);
    int randomNumber = rand() % 10 + 1, userGuess = 0, guessCount = 0;

    printf("DEBUG: %d\n", randomNumber);

    while(randomNumber != userGuess && guessCount < 5) {
        printf("\nEnter a guess from 1-10 inclusive:");
        scanf("%d", &userGuess);

        if(userGuess > randomNumber) printf("\nGuess of %d was too high!", userGuess);
        else if(userGuess < randomNumber) printf("\nGuess of %d was too low!", userGuess);
        ++guessCount;
    }

    if(guessCount == 5) printf("\nYou used up all 5 guesses!");
    else printf("\nYou win!");
    printf("\nThe number was %d", randomNumber);
    return 0;
}
