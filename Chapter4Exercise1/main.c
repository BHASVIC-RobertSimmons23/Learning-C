#include <stdio.h>

int main() {
    int nums[10], total = 0;
    float average;
    for(int x = 0; x < 10; ++x) {
        printf("\nPlease enter number %d: ", x + 1);
        fflush(stdin);
        scanf("%d", &nums[x]);
    }

    int smallest = nums[0], greatest = nums[0];
    for(int x = 0; x <10; ++x) {
        if(nums[x] > greatest) {
            greatest = nums[x];
        }
        if(nums[x] < smallest) {
            smallest = nums[x];
        }
        total += nums[x];
    }
    average = total / 10;
    printf("\nThe average of the 10 numbers: %f\nThe greatest number is: %d\nThe smallest number is: %d", average, greatest, smallest);

}
