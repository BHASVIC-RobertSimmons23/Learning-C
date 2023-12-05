#include <stdio.h>

int sumNumbers(int n) {
    if(n == 1) return 1;
    else return n + sumNumbers(n - 1);
}

int main() {
    printf("%d", sumNumbers(6));
    return 0;
}
