#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void push(int val, int* stack, int size, int top);
int pop(int* stack, int top);
void printStack(int* stack, int size);

int main(){
    int stackASize, stackBSize, noGames, maxSum;
    scanf("%d", &noGames);
    scanf("%d %d %d", &stackASize, &stackBSize, &maxSum);
    char* aString, bString;
    gets(aString)
    int stackA[stackASize]={}, stackB[stackBSize]={}, topA=0, topB;

    return 0;
}

void printStack(int* stack, int size) {
    for(int i = size - 1; i >= 0; --i) {
        printf("\n%d | %d", i, stack[i]);
    }
}

void push(int val, int* stack, int size, int top) {
    if(size == top) {
        printf("Stack is full!!!");
        return;
    }
    stack[top] = val;
    ++top;
}

int pop(int* stack, int top) {
    if (top == 0) {
        printf("Stack is empty!!!");
        return -1;
    }
    --top;
    int poppedValue = stack[top];
    stack[top] = 0;
    return poppedValue;
}
