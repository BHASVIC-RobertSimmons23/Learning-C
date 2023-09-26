#include <stdio.h>

int main() {
    for(int i = 0; i < 11; ++i) {
        for(int j = 0; j < 10; ++j) {
            if (j < 10 - i) printf(j == 9 ? "X\n" : "X");
            else printf(j == 9 ? "Y\n" : "Y");
        }
    }

    printf("\n");
    //More condensed but harder to read version
    for(int i = 0; i < 11; ++i) {
        for(int j = 0; j < 10; ++j) {
            printf(j < 10 - i ? (j == 9 ? "X\n" : "X") : (j == 9 ? "Y\n" : "Y"));
        }
    }
    return 0;
}
