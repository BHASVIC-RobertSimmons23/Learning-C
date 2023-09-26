#include <stdio.h>
#include <math.h>

int main() {
    int numberOfWalls, wallRows;
    float wallLength;

    printf("Enter the number of walls, followed by the number of rows and then the wall length in m (seperated by spaces)");
    scanf("%d%d%f", &numberOfWalls, &wallRows, &wallLength);
    float totalBricks = ceilf(numberOfWalls * wallRows * wallLength * 1.5);
    int numberOfPallets = ceilf(totalBricks / 100);
    int extraBricks = (numberOfPallets * 100) - totalBricks;
    printf("You need %d pallets and will have %d bricks remaining after construction", numberOfPallets, extraBricks);

    return 0;
}
