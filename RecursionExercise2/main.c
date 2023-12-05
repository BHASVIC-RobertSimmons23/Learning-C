#include <stdio.h>

int recursionFactorial(int n) {
    if(n <= 1) return 1;
    else return n * recursionFactorial(n - 1);
}

int iterationFactorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    printf("%d %d", recursionFactorial(5), iterationFactorial(5));
    return 0;
}
