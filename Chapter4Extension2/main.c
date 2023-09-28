#include <stdio.h>

int main() {
    int score = 0;
    char words[10][15] = {"necessary", "narcissistic", "occasion", "accommodate", "vacuum", "accessory", "broccoli", "zucchini", "spaghetti", "embarrass"};
    for(int i = 0; i < sizeof(words); ++i) {
        char guess, answer = words[i][3];
        words[i][3] = '?';
        printf("\nWord %d: %s\nWhat is the missing letter: ", i, words[i]);
        fflush(stdin);
        scanf("%c", &guess);

        words[i][3] = answer;
        if (guess == answer) {
            ++score;
            printf("\nYou were correct!");
        } else printf("\nYou were incorrect :(");
        printf("The correct spelling was %s\n", words[i]);
    }
    printf("You final score was %d", score);
    return 0;
}
