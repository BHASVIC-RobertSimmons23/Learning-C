#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seeds randomness using current datetime.
    fflush(stdin);
    int randomNumber = rand() % 10 + 1;
    int userGuess;

    printf("DEBUG: %d\n", randomNumber);
    printf("Enter a guess from 1-10 inclusive:");
    scanf("%d", &userGuess);

    int diff = randomNumber - userGuess;
    if(diff == 0) printf("You were correct!");
    else if (diff * diff == 1) printf("You were very close!");
    else printf("You were wrong :(");

    printf("\n The number was %d", randomNumber);
    return 0;
}
