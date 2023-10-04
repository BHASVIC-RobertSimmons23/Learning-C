#include <stdio.h>
void editScores (int *scores) {
    for(int i = 0; i < 5; ++i) {
        if(scores[i] <= 20) scores[i] = 0;
    }
}

void printScores (int *scores) {
    for(int i = 0; i < 5; ++i) {
        printf("%d ;", scores[i]);
    }
}

int main() {
    int scores[5];
    for(int i = 0; i < 5; ++i) {
        int userInput;
        do {
            printf("Enter score #%d:", i + 1);
            fflush(stdin);
            scanf("%d", &scores[i]);
        } while (scores[i] < 0 || scores[i] > 75);
    }
    printf("\nScores before edit: ");
    printScores(scores);
    editScores(scores);
    printf("\nScores after edit: ");
    printScores(scores);
    return 0;
}
