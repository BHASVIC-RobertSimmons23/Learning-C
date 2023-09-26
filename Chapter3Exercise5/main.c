#include <stdio.h>

int main() {
    int multiplier, count;
    printf("Enter the times table you want followed by how many times tables you want (Format: 9, 9): ");
    scanf("%d,%d", &multiplier, &count);
    for(int i = 1; i <= count; ++i) {
        printf("\n%d * %d = %d", i, multiplier, i * multiplier);
    }
    return 0;
}
