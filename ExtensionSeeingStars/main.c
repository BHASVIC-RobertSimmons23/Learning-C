#include <stdio.h>

void drawStars(int spaces, int stars);

int main() {
    drawStars(2, 3);
    drawStars(2, 3);
    drawStars(3, 1);
    drawStars(2, 3);
    drawStars(0, 7);
    drawStars(2, 3);
    drawStars(3, 1);
    drawStars(1, 5);
    return 0;
}

void drawStars(int spaces, int stars) {
    int sum = spaces + stars;
    for(int i = 0; i < sum; ++i) {
        printf("%c", i < spaces ? ' ' : '*');
    }
    printf("\n");
}
