#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

bool isPrime(int number) {
    if(number <= 1) return false;
    if(number % 2 == 0 && number != 2) return false;
    for(int i = 3; i < number; i+=2) {
        if(number % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(NULL)); // Seeds randomness using current datetime.
    int credits = 10;
    bool continuing = true;

    while(credits > 0 && continuing) {
        int randomNumber = rand() % 30, userGuess = 0, userBet = 0, check = 0;

        do {
            printf("\nYou have %d credits! How many would you like to bet: ", credits);
            fflush(stdin);
            check = scanf("%d", &userBet);
        } while (check == 0 || userBet <= 0 || userBet > credits);
        printf("\nYou bet %d credits!", userBet);
        credits -= userBet;

        check = 0;
        do {
            printf("\nWhat number would you like to guess on (0<->30): ");
            fflush(stdin);
            check = scanf("%d", &userGuess);
        } while (check == 0 || userGuess < 0 || userGuess > 30);

        printf("\nYou bet %d credits on %d and the random number was %d!", userBet, userGuess, randomNumber);
        if(userGuess == randomNumber) {
            int multiplier = 0, winnings = userBet;
            if (randomNumber % 10 == 0) multiplier += 3;
            if (isPrime(randomNumber)) multiplier += 5;
            if (randomNumber < 5) multiplier += 2;
            if (multiplier) winnings *= multiplier;
            credits += winnings;
            printf(multiplier == 0 ? "\nYou won your %d credits back!" : "\nYou won your %d credits! (Multiplier of %d)", winnings, multiplier);
        } else {
            printf("\nUnfortunately this means you lost all %d credits :(", userBet);
        }

        if (credits > 0) {
            char continuingYN = false;
            check = 0;
            do {
                printf("\nWould you like to continue? (y/n):");
                fflush(stdin);
                check = scanf("%c", &continuingYN);
            } while (check == 0 || !(tolower(continuingYN) == 'n' || tolower(continuingYN) == 'y'));
            continuing = tolower(continuingYN) == 'y';
        }
    }

    printf("\nYou finished the game with %d credits", credits);
    return 0;
}
