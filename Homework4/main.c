#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

float calculateWinnings(const int nums[3], float credit);

int main() {
    srand(time(NULL));
    int nums[3], formatCheck;
    float credit = 1;
    bool keepGoing = true;
    printf("You start with %f credits!", credit);
    while(keepGoing) {
        for(int i = 0; i < 3; ++i) nums[i] = rand() % 9 + 1;
        printf("\nYour roll cost you 20p!");
        credit -= 0.2f;
        printf("\nYou rolled: %d, %d, %d\n", nums[0], nums[1], nums[2]);
        float winnings = calculateWinnings(nums, credit);
        credit += winnings;
        printf("\nYou now have %f credits!", credit);
        keepGoing = false;
        if (credit >= 0.2f) {
            char userInput;
            do {
                printf("\nWould you like to keep going (y/n)?");
                fflush(stdin);
                formatCheck = scanf("%c", &userInput);
            } while(formatCheck == 0 || !(userInput == 'y' || userInput == 'n'));
            keepGoing = userInput == 'y';
        } else {
            printf("\nYou dont have enough money to keep going :(");
        }
    }
    return 0;
}


float calculateWinnings(const int nums[3], float credit) {
    if(!(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])) return 0;
    if(nums[0] == nums[1] && nums[1] == nums[2]) {
        if(nums[0] == 7){
            printf("You rolled 3 7s meaning you win 5!");
            return 5;
        } else if (nums[0] == 9) {
            printf("You rolled 3 9s meaning you lose all of your credits!");
            return credit * -1;
        } else {
            printf("You rolled 3 of a kind meaning you win 1");
            return 1;
        }
    } else if(nums[0] == nums[1] && nums[0] == 9 || nums[1] == nums[2] && nums[1] == 9 || nums[0] == nums[2] && nums[0] == 9) {
        printf("You rolled 2 9s meaning you lose 1!");
        return -1;
    } else {
        printf("You rolled 2 of a kind meaning you win 50p!");
        return 0.5f;
    }
}
