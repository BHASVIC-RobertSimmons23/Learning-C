#include <stdio.h>
#include <stdbool.h>

int getDivisorSum(int n, int i) {
    if(i == 1) return 1;
    if(n % i == 0) return i + getDivisorSum(n, i -1);
    else return getDivisorSum(n, i - 1);
}

bool isPerfect(int n) {
    int divisorSum = 0;
    for(int i = 1; i < n; ++i) {
        if(n % i == 0) divisorSum += i;
    }
    return n == divisorSum;
}

bool isPerfectRecursive(int n) {
    return getDivisorSum(n, n - 1) == n;
}

int main() {
    int num = 6;
    printf("%d %d", isPerfect(num), isPerfectRecursive(num));
    return 0;
}
